import model
import math
import deal
import numpy

input_T_A = 0
input_T_D = 0


# # 调用solve函数求解线性方程
# x = numpy.linalg.solve(B, b)
# print(x)

def solveLinear(refer_list):
    B = numpy.mat(
        "%f %f 1 0 0 0;\
        %f %f  1 0 0 0;\
        %f %f  1 0 0 0;\
        0 0 0 %f %f  1;\
        0 0 0 %f %f  1;\
        0 0 0 %f %f  1" % (refer_list[0].x, refer_list[0].y, refer_list[1].x, refer_list[1].y,
                           refer_list[2].x, refer_list[2].y, refer_list[0].x, refer_list[0].y, refer_list[1].x,
                           refer_list[1].y,
                           refer_list[2].x, refer_list[2].y))
    # print(B)
    b = numpy.array([refer_list[0].e, refer_list[1].e,
                     refer_list[2].e, refer_list[0].n, refer_list[1].n, refer_list[2].n])
    x = numpy.linalg.solve(B, b)
    return x


# 计算三个点的

def calculateStandardCoordinates(list):
    T_A = input_T_A
    T_D = input_T_D
    for i in range(3):
        rs = list[i]
        rs.e = math.cos(rs.DEC / 180.0 * math.pi) * math.sin((rs.RA - T_A) / 180.0 * math.pi) / (
                math.sin(T_D / 180.0 * math.pi) * math.sin(
            rs.DEC / 180.0 * math.pi) + math.cos(T_D / 180.0 * math.pi) * math.cos(
            rs.DEC / 180.0 * math.pi) * math.cos((rs.RA - T_A) / 180.0 * math.pi))
        rs.n = (math.cos(T_D / 180.0 * math.pi) * math.sin(rs.DEC / 180.0 * math.pi) - math.sin(
            T_D / 180.0 * math.pi) * math.cos(rs.DEC / 180.0 * math.pi) * math.cos((rs.RA - T_A) / 180.0 * math.pi)) / \
               (math.sin(T_D / 180.0 * math.pi) * math.sin(rs.DEC / 180.0 * math.pi) + math.cos(T_D / 180.0 *
                                                                                                math.pi) * math.cos(
                   rs.DEC / 180.0 * math.pi) * math.cos((rs.RA - T_A) / 180.0 * math.pi))
        # print(rs)


# 根据六个参数计算,params[0] = e,params[1] = n

def calculateStandardCoordinatesBy6CModel(instar, mc6, eN):
    eN[0] = mc6.a * instar.x + mc6.b * instar.y + mc6.c
    eN[1] = mc6.d * instar.y + mc6.e * instar.y + mc6.f


def transformToSkyPosition(e, n, raDe):
    T_A = input_T_A / 180.0 * math.pi
    T_D = input_T_D / 180.0 * math.pi
    raDe[0] = math.atan(e / (math.cos(T_D) - n * math.sin(T_D))) + T_A
    raDe[1] = math.atan((math.sin(T_D) + n * math.cos(T_D)) *
                        math.cos(raDe[0] - T_A) / (math.cos(T_D) - n * math.sin(T_D)))
    raDe[0] *= 180.0 / math.pi
    raDe[1] *= 180.0 / math.pi


# 与gaiaStarList中的所有gaisStar进行比较


# 根据传入的gaisStar和referStar进行匹配
def judge(error, inputStarList, gaiaStarList, referStarList, filename):
    print(input_T_A, input_T_D)
    successList = []
    failedList = []
    for k in range(len(inputStarList)):
        instar = inputStarList[k]
        # 计算三个点的e、n
        calculateStandardCoordinates(referStarList)
        # 求解六个参数
        x = solveLinear(referStarList)
        mc6 = model.ModelC6(x[0], x[1], x[2], x[3], x[4], x[5])
        # 求解eN，eN = [e,n]
        eN = [0, 0]
        calculateStandardCoordinatesBy6CModel(instar, mc6, eN)
        # 根据eN求解raDe, raDe = [ra,de]
        raDe = [0, 0]
        transformToSkyPosition(eN[0], eN[1], raDe)
        ra = raDe[0]
        de = raDe[1]
        flag = False
        minError = float('inf')
        gaia = []
        for i in range(len(gaiaStarList)):
            _gaia = gaiaStarList[i]
            errorRA = math.fabs(ra - _gaia.RA)
            errorDEC = math.fabs(de - _gaia.DEC)
            if (errorRA < error and errorDEC < error):
                flag = True
                _minError = errorRA ** 2 + errorDEC ** 2
                if _minError < minError:
                    gaia = _gaia
                    minError = _minError

        if flag:
            successList.append(model.StarInformation(gaia, instar))
        # 全都没匹配上
        if not flag:
            failedList.append(model.FailedStar(instar.x, instar.y, ra, de))

    # filename Un_YFwb050070.txt
    deal.outputSuccessList(
        successList, './file/result/Matched/' + filename[3:-4] + '.txt')
    deal.outputFailedList(
        failedList, './file/result/Unmatched/Unmatched' + filename[-7:-4] + '.txt')
