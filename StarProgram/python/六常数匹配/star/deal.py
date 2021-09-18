# 测试读取文件 输入输出

import model


def getGisasList():
    with open('./file/gaiadr2_12arcmin_r_ad.txt', mode='r') as file:
        gais_list = []
        while True:
            content = file.readline().split()
            if not content:
                break
            # 非空才进行转换，否则可能读到最后一行空字符的情况
            gais_info = model.GaiaStarInformation(
                content[0], float(content[1]), float(content[2]), float(content[3]), float(content[4]), float(content[5]), float(content[6]), float(content[7]))
            gais_list.append(gais_info)
        return gais_list


def getInputStarList():
    with open('./file/inputstar129.txt', mode='r') as file:
        input_list = []
        while True:
            content = file.readline().split()
            if not content:
                break
            # 非空才进行转换，否则可能读到最后一行空字符的情况
            inputstar = model.InputStar(
                float(content[0]), float(content[1]))
            input_list.append(inputstar)
            print(inputstar)
        return input_list


# getInputStarList()
