# Tìm tổng số sinh viên
awk -F: 'NR > 1 { count++ } END {print "Tổng số sinh viên: " count }' datafile 

# Tìm tổng số lớp
awk -F: 'NR > 1 { classes[$4] = 1 } END { print "Tổng số lớp: " length(classes) }' datafile

# Thống kê sinh viên theo Quê quán
awk -F: 'NR > 1 { count[$5]++ } END { for (location in count) print "Quê quán" location ": " count[location] " sinh viên" }' datafile