# 测试读取文件 输入输出

import model

with open('./file/gaiadr2_12arcmin_r_ad.txt', mode='r') as file:
    count = 1
    gais_list = []
    # while True:

    #     content = file.readline()
    #     print(str(count)+":"+content)
    #     count += 1
    #     if not content:
    #         break
    # 去掉换行符输出
    content = file.readline().split()
    gais_info = model.GaiaStarInformation(
        float(content[0]), float(content[1]), float(content[2]), float(content[3]), float(content[4]), float(content[5]), float(content[6]), float(content[7]))
    # print(content)
    # print(content[0])
    print(gais_info)
