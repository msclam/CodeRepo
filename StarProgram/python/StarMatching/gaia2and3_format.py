inPutFileName = './star_table_file/gaiadr3_30_arcmin_r.txt'
outPutFileName = './result_file/gaiadr3_30_arcmin_r_ad.txt'

# 原来的表头格式 :  ra     dec  source  plx  pmra pmde  Gmag   rv
# 调整后表头的格式: source ra   dec     Gmag pmra pmde  plx    rv

ofile = open(outPutFileName, 'w')

first_line_flag = True
with open(inPutFileName, mode='r') as ifile:
    for line in ifile.readlines():
        line = line.strip().split()
        if line:
            for i in range(len(line)):
                if line[i] == '99999.9999' or line[i] == '99999.999' or line[i] == '9999.99':
                    line[i] = '0'

            line[0], line[1], line[2], line[3], line[6] = line[2], line[0], line[1], line[6], line[3]

            line = ' '.join(line)

            if first_line_flag:
                first_line_flag = False
                ofile.write(line)
            else:
                ofile.write('\n')
                ofile.write(line)

ofile.close()
