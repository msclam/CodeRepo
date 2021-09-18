import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import math


def func(x, n):
    '''
    This function return n significant digits of value x.
    :param x:float
        value
    :param n:int
        the significant count
    :return:float
        n significant digits of value x
    '''
    P = 0
    if(x < 0):
        x = -x
        P = 1
    if(x < 1):
        x1 = list(str(x))
        index = 0
        flag = 0
        for i in range(len(x1)):
            if(x1[i] != '0' and x1[i] != '.'):
                flag = 1
            if(flag == 1):
                n = n-1
            if(n==0):
                index = i
                return -round(x, index - 1) if P == 1 else round(x, index - 1)

    elif(x / 10**n < 1):
        x1 = list(str(x))
        index = 0
        flag = 0
        for i in range(len(x1)):
            n = n-1
            if (flag == 1):
                index = index + 1
            if(n == 0):
                return -round(x, index) if P == 1 else round(x, index)
            if(x1[i] == '.'):
                flag = 1
                n = n + 1
    else:
        x1 = list(str(x))
        l = 0
        for i in range(len(x1)):
            if(x1[i] == '.'):
                l = i+1
                break
        nn = l-n-1
        return -round(x/10**nn)*10**nn if P == 1 else round(x/10**nn)*10**nn

A = np.array([[15.,-4.,-2.],
     [-4., 10., 3.],
     [-2., 3., 20.]])
b = np.array([-2., 3., 5.]).reshape(-1, 1)

print('---------A--------------')
print(A)
L = np.zeros(A.shape)

for j in range(A.shape[0]):
    for i in range(j, A.shape[0]):
        if(i == j):
            t = 0
            for k in range(0, j):
                t += L[j, k] * L[j, k]
            L[j, j] = func(math.sqrt(A[j, j] - t), 4)
        else:
            t = 0
            for k in range(0, j):
                t += L[i, k] * L[j, k]
            L[i, j] = func((A[i, j] - t)/L[j, j], 4)

print('---------L--------------')
print(L)
Lt = L.T
print('---------Lt--------------')
print(Lt)


y = np.zeros((3, 1))
for i in range(y.shape[0]):
    t = 0
    for k in range(0, i):
        t += L[i, k] * y[k, 0]
    y[i, 0] = func((b[i, 0]-t) / L[i, i], 4)

print('---------y--------------')
print(y)

x = np.zeros((3,1))
n = x.shape[0]
for i in reversed(range(x.shape[0])):
    t = 0
    for k in range(i, n):
        t += L[k, i] * x[k, 0]
    x[i, 0] = func((y[i, 0]-t)/L[i, i], 4)

print('---------x--------------')
print(x)

