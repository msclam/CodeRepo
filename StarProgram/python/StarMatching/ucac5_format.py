inPutFileName = 'ucac5_table.txt'
outPutFileName = 'ucac5_table_ad.txt'

ofile = open(outPutFileName, 'w')

first_line_flag = True
with open(inPutFileName, mode='r') as ifile:
    for line in ifile.readlines():
        line = line.strip().split()
        if line:
            # for i in range(len(line)):
            #     if line[i] == '99999.9999' or line[i] == '99999.999' or line[i] == '9999.99':
            #         line[i] = '0'

            line[0], line[1], line[2] = line[2], line[0], line[1]

            line = ' '.join(line)

            if first_line_flag:
                first_line_flag = False
                ofile.write(line)
            else:
                ofile.write('\n')
                ofile.write(line)

ofile.close()
