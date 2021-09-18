import re
import model

from matplotlib import pyplot as plt

def readData():
    with open('test.txt') as file:
        x = []
        y = []
        for line in file.readlines():
            str = re.split('\s+', line.rstrip())
            x.append(float(str[0]))
            y.append(float(str[1]))
    return x, y




x, y = readData()
print(x)
print(y)


plt.figure()
plt.scatter(x, y)
plt.show()


