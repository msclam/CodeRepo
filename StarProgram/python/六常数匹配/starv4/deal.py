# 测试读取文件 输入输出

import model
import os


def getGaiaList(filename):
    with open(filename, mode='r') as file:
        gaia_list = []
        while True:
            content = file.readline().split()
            if not content:
                break
            # 非空才进行转换，否则可能读到最后一行空字符的情况
            gaia_info = model.GaiaStarInformation(
                content[0], float(content[1]), float(content[2]), float(content[3]), float(content[4]),
                float(content[5]), float(content[6]), float(content[7]))
            gaia_list.append(gaia_info)
        return gaia_list


def getInputStarList(filename):
    with open(filename, mode='r') as file:
        input_list = []
        while True:
            content = file.readline().split()
            if not content:
                break
            # 非空才进行转换，否则可能读到最后一行空字符的情况
            inputstar = model.InputStar(
                float(content[0]), float(content[1]))
            input_list.append(inputstar)
            # print(inputstar)
        return input_list


# 获取参考星的信息

def getReferTable():
    with open('./file/InputReferStarPosition.txt', mode='r') as file:
        refer_table = {}
        flag = True
        while flag:
            number = 0
            refer_list = []
            for i in range(4):
                content = file.readline().split()
                if not content:
                    flag = False
                    break
                # 读第一行
                if i == 0:
                    number = int(content[0][-10:-7])
                else:  # [x, y, ra, de]
                    referstar = model.ReferStarInformation(
                        float(content[0]), float(content[1]), float(content[2]), float(content[3]), 0, 0)
                    refer_list.append(referstar)
                refer_table[number] = refer_list
                # 非空才进行转换，否则可能读到最后一行空字符的情况

        return refer_table


# getInputStarList()

# 存T_A, T_D的值的表

def getGaiaStarTable():
    with open('./file/gaiaStarTable.txt', mode='r') as file:
        star_table = {}
        while True:
            content = file.readline().split()
            if not content:
                break
            # 非空才进行转换，否则可能读到最后一行空字符的情况
            # [0] gaia_12arcmin_129_133_ad.txt [106.3246420551963] [-05.6020466837790]
            numbers = content[0].split('_')
            # 判断是范围还是单个，转化为dict
            if (numbers[3].isdigit()):
                for i in range(int(numbers[2]), int(numbers[3]) + 1):
                    star_table[i] = [content[1], content[2]]
            else:
                star_table[int(numbers[2])] = [content[1], content[2]]

            # print(inputstar)
        return star_table


# gaia星表，用于匹配查找使用，返回一个 number -- filename字典，通过number找对应的名字

def getGaiaFilesTable():
    base_dir = "./file/gaia_ad"
    gaia_files = {}
    for root, dirs, files in os.walk(base_dir):
        root, dirs
        # print(root, dirs, files)
        for i in range(len(files)):
            file_name = files[i]
            numbers = file_name.split('_')
            print(numbers)
            if (numbers[3].isdigit()):  # 读入的gaia文件名字的存在数字范围，则每个范围命名一个文件
                for i in range(int(numbers[2]), int(numbers[3]) + 1):
                    gaia_files[i] = file_name
            else:  # 否则就只命名一个文件
                gaia_files[int(numbers[2])] = file_name
        # print(files)
    return gaia_files


# 存储匹配成功星的输出信息

def outputSuccessList(successList, filename):
    with open(filename, newline='\r\n', mode='w+') as file:
        for i in range(len(successList)):
            # print(i)
            file.write(str(successList[i]))
            file.write("\n")


# 存储匹配失败星的输出信息

def outputFailedList(failedList, filename):
    with open(filename, newline='\r\n', mode='w+') as file:
        for i in range(len(failedList)):
            # print(i)
            file.write(str(failedList[i]))
            file.write("\n")


# print(getGaiaFilesTable())
# print(getGaiaStarTable())
# print(getReferTable())