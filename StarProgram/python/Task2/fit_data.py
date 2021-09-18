import numpy as np
import matplotlib.pyplot as plt


# x = np.arange(0, 1000)  # x值，此时表示弧度
# y = np.sin(x * np.pi / 180)  # 函数值，转化成度
#
# z1 = np.polyfit(x, y, 7)  # 用7次多项式拟合，可改变多项式阶数；
# print(z1)
# p1 = np.poly1d(z1)  # 得到多项式系数，按照阶数从高到低排列
# print(p1)  # 显示多项式
#
# yvals = p1(x)  # 可直接使用yvals=np.polyval(z1,xxx)
# # print(yvals)
#
# plt.plot(x, y, '*', label='original values')
# plt.plot(x, yvals, 'r', label='polyfit values')
# plt.xlabel('x axis')
# plt.ylabel('y axis')
# plt.legend(loc=1)  # 指定legend在图中的位置，类似象限的位置
# plt.title('polyfitting')
# plt.show()

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


file_name = './resultInfo/result.txt'
pic_root = './result_fig/'

x = []
y = []

with open(file_name, mode='r') as file:
    for line in file.readlines():
        line = line.strip().split()
        if line and is_number(line[0]):
            y.append(float(line[6]) - float(line[2]))
            x.append(float(line[7]))

print(x)
print(y)

z = np.polyfit(x, y, 5)  # 求出五阶多项式的系数
p = np.poly1d(z)  # 求出五阶多项式表达式
print(z)
print(p)

yvals = p(x)  # 求出拟合曲线的y值


plt.plot(x, y, '*', label='orign curve')
plt.plot(x, yvals, 'r+', label='polyfit curve')
plt.xlabel('x axis')
plt.ylabel('y axis')
plt.title('5 order ployfitting')
plt.legend(loc=1)
plt.show()
