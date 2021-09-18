import os
# outPutFileName = 'ucac4_table_notnull_ad_add0.txt'
# inPutFileName = 'ucac4_table_notnull.txt'

star_table_file_root = "./star_table_file/"
result_file_root = "./result_file/"

outPutFileName = 'ucac4_20arcmin_ad.txt'
inPutFileName = 'ucac4_20arcmin.txt'

outPutFileName = os.path.join(result_file_root, outPutFileName).replace('\\', '/')
inPutFileName = os.path.join(star_table_file_root, inPutFileName).replace('\\', '/')

ofile = open(outPutFileName, 'w')

first_line_flag = True
with open(inPutFileName, mode='r') as ifile:
    for line in ifile.readlines():
        line = line.strip().split()
        if line:

            line[0], line[1], line[2] = line[2], line[0], line[1]

            # for i in range(2):
            #     line.append('0')

            line = ' '.join(line)

            if first_line_flag:
                first_line_flag = False
                ofile.write(line)
            else:
                ofile.write('\n')
                ofile.write(line)

ofile.close()


