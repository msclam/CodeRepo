import numpy
# from scipylinalg import lu

# x1 = x2 = x3 = y1 = y2 = y3 = 31

# a = numpy.mat(
#     "2 1 1 0 0 0;2 2 1 0 0 0;3 3 1 0 0 0;0 0 0 1 1 1;0 0 0 2 2 1;0 0 0 3 3 1")
# b = numpy.array([1, 1, 1, 1, 1, 1])
# # pl u = lu(a permute_l=True)
# x = numpy.linalg.solve(a, b)
# print(x)
# # print(pl)


# x = 1303.568000
# B = numpy.mat(
#     "%f 1321.957000 1 0 0 0;\
#     182.010000 1118.013000 1 0 0 0;\
#     655.250000 1765.788000 1 0 0 0;\
#     0 0 0 1303.568000 1321.957000 1;\
#     0 0 0 182.010000 1118.013000 1;\
#     0 0 0 655.250000 1765.788000 1" % (x))
# b = numpy.array([-1.391681, 5.707705, 0.169227, -2.854636, 4.724572, 0.843252])

# # 调用solve函数求解线性方程
# x = numpy.linalg.solve(B, b)
# print(x)


def solveLinear(refer_list):
    B = numpy.mat(
        "%f %f 1 0 0 0;\
        %f %f  1 0 0 0;\
        %f %f  1 0 0 0;\
        0 0 0 %f %f  1;\
        0 0 0 %f %f  1;\
        0 0 0 %f %f  1" % (refer_list[0].x, refer_list[0].y, refer_list[1].x, refer_list[1].y,
                           refer_list[2].x, refer_list[2].y, refer_list[0].x, refer_list[0].y, refer_list[1].x, refer_list[1].y,
                           refer_list[2].x, refer_list[2].y))
    print(B)
    b = numpy.array([refer_list[0].e, refer_list[1].e,
                    refer_list[2].e, refer_list[0].n, refer_list[1].n, refer_list[2].n])

#    return numpy.linalg.solve(B, b)
    x = numpy.linalg.solve(B, b)
    return x
