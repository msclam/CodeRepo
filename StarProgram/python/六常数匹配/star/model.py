
# 待匹配的坐标
class InputStar:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__(self):
        return 'InputStar [x=%d , y=%d]' % (self.x, self.y)

# 给定的三个点


class ReferStarInformation:
    def __init__(self, RA, DEC, x, y, e, n):
        self.RA = RA
        self.DEC = DEC
        self.x = x
        self.y = y
        self.e = e
        self.n = n

    def __str__(self):
        return 'ReferStarInformation [%.15f %.15f %.15f %.15f %.15f %.15f]' % (self.RA, self.DEC, self.x, self.y, self.e, self.n)

# 确定的星图内容


class GaiaStarInformation:
    def __init__(self, Source, RA, DEC, Gmag, PmRA, PnDE, Plx, RV):
        self.Source = Source
        self.RA = RA
        self.DEC = DEC
        self.Gmag = Gmag
        self.PmRA = PmRA
        self.PnDE = PnDE
        self.Plx = Plx
        self.RV = RV

    def __str__(self):
        return 'GaiaStarInformation [%-25s %.15f %.15f %.15f %.15f %.15f %.15f %f]' % (self.Source, self.RA, self.DEC, self.Gmag, self.PmRA, self.PnDE, self.Plx, self.RV)

# 输出的星图


class StarInformation:
    def __init__(self, GaiaStarInformation, InputStar):
        self.GaiaStar = GaiaStarInformation
        self.InputStar = InputStar

    def __str__(self):
        return 'StarInformation [%-25s %.15f %.15f %.15f %.15f %.15f %.15f %.15f %.15f %f]'\
            % (self.GaiaStar.Source, self.InputStar.x, self.InputStar.y, self.GaiaStar.RA, self.GaiaStar.DEC, self.GaiaStar.Gmag, self.GaiaStar.PmRA, self.GaiaStar.PnDE, self.GaiaStar.Plx, self.GaiaStar.RV)

# 匹配失败


class FailedStar:
    def __init__(self, x, y, RA, DEC):
        self.x = x
        self.y = y
        self.RA = RA
        self.DEC = DEC

    def __str__(self):
        return 'InputStar [%.15f %.15f %.15f %f]' % (self.x, self.y, self.RA, self.DEC)


class ModelC6:
    def __init__(self, a, b, c, d, e, f):
        self.a = a
        self.b = b
        self.c = c
        self.d = d
        self.e = e
        self.f = f

    def __str__(self):
        return 'ModelC6 [%.20f %.20f %.20f %.20f %.20f %.20f]' % (self.a, self.b, self.c, self.d, self.e, self.f)


# star = InputStar(10, 20)
# referStar = ReferStarInformation(1, 3, 3, 4, 5, 6)
# gaisStar = GaiaStarInformation(1, 2, 3, 4, 5, 6, 7, 8)
# starInformation = StarInformation(gaisStar, star)
# print(starInformation)
