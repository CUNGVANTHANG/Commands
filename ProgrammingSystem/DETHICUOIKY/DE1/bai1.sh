# Tổng số máu sinh viên đã hiến
awk -F: 'NR > 1 { sum += $4 } END { print "Tổng số máu: " sum }' datafile

# In tổng số máu theo loại. Lưu ý: chỉ có các loại máu O, AB, A, B 
awk -F: 'NR > 1 && ($5 == "O" || $5 == "AB" || $5 == "A" || $5 == "B") { sum[$5] += $4 } END { for (i in sum) print i ": " sum[i] }' datafile

# In số máu mỗi sinh viên đã hiến theo cấu trúc sau: Tên sinh viên - Mã số sinh viên đã hiến số máu
awk -F: 'NR > 1 { sum[$1] += $4; name[$1] = $2} END {for (i in sum) print "Sinh viên " name[i] " da hien " sum[i]}' datafile

# Tìm sinh viên hiến nhiều nhất
awk -F: 'NR > 1 { sum[$1] += $4; name[$1] = $2; max = 0; j } END {for (i in sum) if (sum[i] > max) { max = sum[i]; j = i } print "Sinh viên " name[j] " hien nhieu nhat " max }' datafile