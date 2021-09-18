# Method 1
import numpy as np
import matplotlib.pyplot as plt

from scipy.optimize import curve_fit


def fun(x, a, b):
    return x / (a * x + b)


x = np.transpose(np.array([1, 2, 3, 4, 6, 8, 10, 12, 14, 16]))  # transpose 是转置
y = np.transpose(np.array([4, 6.41, 8.01, 8.79, 9.53, 9.86, 10.33, 10.42, 10.53, 10.61]))

popt, pocov = curve_fit(fun, x, y)  # popt是参数a, b
print(popt)


def fi(t):
    return t / (popt[0] * t + popt[1])


fiy = np.transpose(np.array([fi(1), fi(2), fi(3), fi(4), fi(6), fi(8), fi(10), fi(12), fi(14), fi(16)]))  # 求fi向量
print('fi vector:', fiy)

delta_square = np.power(np.linalg.norm(y - fiy, ord=2), 2)  # delta的平方是求|| y - fiy ||的2范数
print('delta square:', delta_square)

print('a:%f, b:%f' % (popt[0], popt[1]))

xd = np.arange(0, 16.5, 0.01)
yd = xd / (popt[0] * xd + popt[1])

plot1 = plt.plot(x, y, 'b*', label='original values')
plot2 = plt.plot(xd, yd, 'r', label='polyfit values')
plt.xlabel('x')
plt.ylabel('y')
plt.legend(loc=2)
plt.title('4-19 curve_fit')
plt.show()
