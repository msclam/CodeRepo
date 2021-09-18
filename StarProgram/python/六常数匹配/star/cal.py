import model
import math
import solve
import deal

input_T_A = 106.32464205520
input_T_D = -5.60204668378


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


def calculateStandardCoordinatesBy6CModel(instar, mc6, params):
    params[0] = mc6.a * instar.x + mc6.b * instar.y + mc6.c
    params[1] = mc6.d * instar.y + mc6.e * instar.y + mc6.f


def transformToSkyPosition(e, n, raDe):
    T_A = input_T_A / 180.0 * math.pi
    T_D = input_T_D / 180.0 * math.pi
    raDe[0] = math.atan(e / (math.cos(T_D) - n * math.sin(T_D))) + T_A
    raDe[1] = math.atan((math.sin(T_D) + n * math.cos(T_D)) *
                        math.cos(raDe[0] - T_A) / (math.cos(T_D) - n * math.sin(T_D)))
    raDe[0] *= 180.0 / math.pi
    raDe[1] *= 180.0 / math.pi


# 与gaiaStarList中的所有gaisStar进行比较


def judge(error, raDe, inputStarList, gaiaStarList):
    # for k in range(len(inputStarList)):

    ra = raDe[0]
    de = raDe[1]
    flag = False
    for i in range(len(gaiaStarList)):
        gaia = gaiaStarList[i]
        if (math.fabs(ra - gaia.RA) < error and math.fabs(de - gaia.DEC) < error):
            flag = True
            print("ok")
    if not flag:
        print("failed")


instar = model.InputStar(723.852, 785.387)

referlist = []
referStar1 = model.ReferStarInformation(
    106.31762939482, -5.57373340541, 1303.568, 1321.957, 0, 0)
referStar2 = model.ReferStarInformation(
    106.40679217385, - 5.59093467273, 182.010, 1118.013, 0, 0)
referStar3 = model.ReferStarInformation(
    106.36968020816, - 5.53916801171, 655.250, 1765.788, 0, 0)

referlist.append(referStar1)
referlist.append(referStar2)
referlist.append(referStar3)
# list.append(referStar1)
# list.append(referStar1)

calculateStandardCoordinates(referlist)
for i in range(3):
    print(referlist[i])
x = solve.solveLinear(referlist)
mc6 = model.ModelC6(x[0], x[1], x[2], x[3], x[4], x[5])
print(mc6)
params = [0, 0]
calculateStandardCoordinatesBy6CModel(instar, mc6, params)
# e
# print("e:")
# print(params[0])
# n
# print("n:")
# print(params[1])
raDe = [0, 0]
transformToSkyPosition(params[0], params[1], raDe)
print(raDe[0], raDe[1])
gisas_list = deal.getGisasList()
# for i in range(len(gisas_list)):
#     print(gisas_list[i])
judge(0.0014, raDe, instar, gisas_list)
# print(106.317629*68.448698+(-5.573733)*(-57.917400)-7601.511042)
# print(106.406792*68.448698+(-5.590935)*(-57.917400)-7601.511042)
