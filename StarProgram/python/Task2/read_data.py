input_search_star_file_name = './autoSearchStarInfo/YFwb030430_2.txt'
input_matching_info_file_name = './single_file_matching_information/YFwb030430_2.txt'

output_file_name = './resultInfo/result.txt'

output_file = open(output_file_name, 'w')

x_s = []
y_s = []
G_instr = []

def is_number(s):
    if s.count(".") == 1:  # 小数的判断
        if s[0] == "-":
            s = s[1:]
        if s[0] == ".":
            return False
        s = s.replace(".", "")
        for i in s:
            if i not in "0123456789":
                return False
        else:  # 这个else与for对应的
            return True
    elif s.count(".") == 0:  # 整数的判断
        if s[0] == "-":
            s = s[1:]
        for i in s:
            if i not in "0123456789":
                return False
        else:
            return True
    else:
        return False

with open(input_search_star_file_name, mode='r') as file:
    for line in file.readlines():
        line = line.strip().split()
        # if line and str.isdigit(line[0]):
        if line and is_number(line[0]):
            x_s.append(float(line[1]))
            y_s.append(float(line[2]))
            G_instr.append(float(line[4]))

            # tmp = [line[0], line[1], line[2], line[4]]
            # line = '\t'.join(tmp)
            #
            # output_file.write(line)
            # output_file.write('\n')

star_id = []
x_m = []
y_m = []
Gmag = []
b_r = []

with open(input_matching_info_file_name, mode='r') as file:
    for line in file.readlines():
        line = line.strip().split()
        if line and is_number(line[0]):
            star_id.append(float(line[0]))
            x_m.append(float(line[1]))
            y_m.append(float(line[2]))
            Gmag.append(float(line[5]))
            b_r.append(float(line[12]))

res = []
for i in range(len(x_m)):
    flag = False
    for j in range(len(x_s)):
        if abs(x_m[i] - x_s[j]) <= 0.1 and abs(y_m[i] - y_s[j]) <= 0.1:
            content = [str(x_s[j]), str(y_s[j]), str(G_instr[j]), str("%20.0f" % star_id[i]), str(x_m[i]), str(y_m[i]),
                       str(Gmag[i]), str(b_r[i])]
            # content = [x_s[j], y_s[j], star_id[i], x_m[i], y_m[i], Gmag[i], b_r[i]]
            content = '\t'.join(content)
            res.append(content)
            flag = True
        if flag == True:
            break

first_line = True
for i in range(len(res)):
    if first_line:
        first_line = False
        str = "{:^10} {:^15s} {:^10s} {:^10s} {:>35s} {:>15s} {:>10s} {:^10s}".format("x_s", "y_s", "G_instrument", "source", "x_m", "y_m", "Gmag", "bp-rp")
        output_file.write(str)
        output_file.write('\n')
    else:
        output_file.write(res[i])
        output_file.write('\n')

output_file.close()

# tmp = [line[0], line[1], line[2], line[4]]
# line = '\t'.join(tmp)
#
# output_file.write(line)
# output_file.write('\n')

# output_file = open(output_file_name, 'w')
#
# with open(input_matching_info_file_name, mode='r') as file:
#     for line in file.readlines():
#         line = line.strip().split()
#         if line:
#             if str.isdigit(line[0]):
#                 pass
#
#
# output_file.close()

# from matplotlib import pyplot as plt

# plt.scatter(x, y, c='b')
# plt.show()


# with open(input_search_star_file_name, mode='r') as file_s:
#     with open(input_matching_info_file_name, mode='r') as file_m:
# for line in file_s.readlines():
#     line = line.strip().split()
#     if line and str.isdigit(line[0]):
#
#         flag = False
#         for content in file_m.readlines():
#             content = content.strip().split()
#
#             if content and str.isdigit(content[0]):
#
#                 if abs(float(line[1]) - float(content[1])) <= 0.1 and abs(float(line[2]) - float(content[2])) <= 0.1:
#                     tmp = [line[0], content[0], content[1], content[2], content[12]]   # number catologId x y bp-rp
#                     tmp = '\t'.join(tmp)
#
#                     output_file.write(tmp)
#                     output_file.write('\n')
#                     flag = True
#
#             if flag == True:
#                 break

# output_file.close()
