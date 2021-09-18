import cal
import deal
import model
import os

error = 5 / 3600

if __name__ == "__main__":
    # 三颗星
    refer_table = deal.getReferTable()
    # 存了TA、TD
    gaia_table = deal.getGaiaStarTable()
    # 找那个gaia文件进行比较
    gaia_flies = deal.getGaiaFilesTable()

    base_dir = "./file/InputStarXY"
    for root, dirs, files in os.walk(base_dir):
        for i in range(len(files)):
            file_name = files[i]
            print(file_name)
            index_number = int(file_name[-7:-4])
            # input_star_list =

            T_A = gaia_table[index_number][0]
            T_D = gaia_table[index_number][1]
            cal.input_T_A = float(T_A)
            cal.input_T_D = float(T_D)
            refer_list = refer_table[index_number]

            input_star_list = deal.getInputStarList(base_dir + '/' + file_name)
            # print(input_star_list)

            gaia_star_list = deal.getGaiaList('./file/gaia_ad/' + gaia_flies[index_number])
            print(gaia_flies[index_number])

            cal.judge(error, input_star_list, gaia_star_list, refer_list, file_name)
