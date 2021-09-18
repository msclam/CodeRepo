import matplotlib.pyplot as plt
import numpy as np

x = np.arange(0, 6, 0.1)
y1 = np.exp(x) * np.cos(x)
y2 = np.exp(x) * np.sin(x)

def func1(x):
    return np.exp(x) * np.cos(x)

def func2(x):
    return np.exp(x) * np.sin(x)

print(func1(1), func1(3))
print(func2(1), func2(3), func2(3/4 *np.pi))

plot1 = plt.plot(x, y1, 'r')
plot2 = plt.plot(x, y2, 'b')
plt.xlabel('x')
plt.ylabel('y')
plt.title('5_6')
plt.show()