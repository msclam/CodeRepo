from matplotlib import pyplot as plt
from matplotlib.pyplot import MultipleLocator
import numpy as np
import re


def loadData(fileName):
    x = []
    y = []
    with open(fileName) as file:
        for line in file.readlines():
            str = re.split('\s+', line.rstrip())
            x.append(float(str[0]))
            y.append(float(str[1]))

    return x, y


def loadData2(fileName):
    x = []
    y = []
    with open(fileName) as file:
        while True:
            line = file.readline().split()
            print(line)
            if not line:
                break
            x.append(float(line[0]))
            y.append(float(line[1]))

    return x, y


def loadData3(fileName):
    with open(fileName) as file:
        x = []
        y = []
        for line in file.readlines():
            str = line.rstrip().split()
            print(str)
            x.append(float(str[0]))
            y.append(float(str[1]))

    return x, y

def load(fileName):
    with open(fileName) as fileName:
        x = []
        y = []
        for line in fileName.readlines():
            line = line.strip().split()
            if line:
                x.append(line[0])
                y.append(line[1])
    return x, y


def plotData(x, y):
    print("x: {}, y: {}".format(x, y))
    plt.figure()
    plt.scatter(x, y, s=3, c='b')
    plt.show()



# x, y = loadData('Un_YFwb050070.txt')
# x, y = loadData2('Un_YFwb050070.txt')
# x, y = loadData2('Un_YFwb050070.txt')
# plotData(x, y)
