inPutFileName = './star_table_file/gaiadr3_30_arcmin_r_bp_rp_not_null.txt'
outPutFileName = './result_file/gaiadr3_30_arcmin_r_bp_rp_not_null_ad.txt'
#                  0     1     2       3    4    5     6      7        8     9    10
# 原来的表头格式 :  ra     dec  source  plx  pmra pmde  Gmag   BPmag  RPmag  BP-RP  rv
# 调整后表头的格式: source ra   dec     Gmag pmra pmde  plx    rv     BPmag  RPmag  BP-RP

ofile = open(outPutFileName, 'w')

first_line_flag = True
with open(inPutFileName, mode='r') as ifile:
    for line in ifile.readlines():
        line = line.strip().split()
        if line:
            for i in range(len(line)):
                if line[i] == '99999.9999' or line[i] == '99999.999' or line[i] == '9999.99':
                    line[i] = '0'

            line[0], line[1], line[2], line[3], line[6], line[7], line[8], line[9], line[10] = \
                    line[2], line[0], line[1], line[6], line[3], line[10], line[7], line[8], line[9]

            line = ' '.join(line)

            if first_line_flag:
                first_line_flag = False
                ofile.write(line)
            else:
                ofile.write('\n')
                ofile.write(line)

ofile.close()
