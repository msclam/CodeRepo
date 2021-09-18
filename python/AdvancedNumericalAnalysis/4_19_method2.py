# Method 2
import matplotlib.pyplot as plt
import scipy
import numpy as np

fi0 = np.transpose(np.array([1, 1, 1, 1, 1, 1, 1, 1, 1, 1]))
fi1 = np.transpose(np.array([1, 1 / 2, 1 / 3, 1 / 4, 1 / 6, 1 / 8, 1 / 10, 1 / 12, 1 / 14, 1 / 16]))

x = np.transpose(np.array([1, 2, 3, 4, 6, 8, 10, 12, 14, 16]))
y = np.transpose(np.array([4, 6.41, 8.01, 8.79, 9.53, 9.86, 10.33, 10.42, 10.53, 10.61]))

G = np.array([
    [np.dot(fi0, fi0), np.dot(fi1, fi0)],
    [np.dot(fi0, fi1), np.dot(fi1, fi1)]
])
d = np.array([np.dot(1 / y, fi0), np.dot(1 / y, fi1)])
fi = np.linalg.solve(G, d)

print(G)
print(d)
print(fi)


def func(x):
    return x / (fi[0] * x + fi[1])


fiy = np.transpose(
    np.array([func(1), func(2), func(3), func(4), func(6), func(8), func(10), func(12), func(14), func(16)]))
print(fiy)

delta_square = np.power(np.linalg.norm(y - fiy, ord=2), 2)
print(delta_square)

plot1 = plt.plot(x, y, 'b*', label='original values')

xd = np.arange(0, 16.5, 0.01)
yd = xd / (fi[0] * xd + fi[1])

plot2 = plt.plot(xd, yd, 'r', label='polyfit values')
plt.xlabel('x')
plt.ylabel('y')
plt.legend(loc=2)
plt.title('4-19 curve_fit')
plt.show()
