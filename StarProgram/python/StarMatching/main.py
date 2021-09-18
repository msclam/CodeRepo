from matplotlib import pyplot as plt

# fileName = "Un_YFwb050070.txt"
# fileName = "Unmatched070.txt"
# fileName = "YFwb050070.txt"
fileName = "test/test.txt"

def loadData(fileName):
    with open(fileName) as file:
        x = []
        y = []
        for line in file.readlines():
            line = line.strip().split()
            if line:
                x.append(float(line[0]))
                y.append(float(line[1]))
    return x, y

def draw(x, y):
    plt.figure()
    plt.scatter(x, y, s=3, c='b')
    plt.xlabel('X')
    plt.ylabel('Y')
    # plt.title('the matching point of YFwb050070.txt')
    # plt.savefig(r'C:\Users\tesseract\Desktop\success.png', dpi=300)
    plt.show()

x, y = loadData(fileName)
draw(x, y)