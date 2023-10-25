# a) In các hàng chứa xâu “Tha”
grep "Tha" datafile

# b) In các hàng chứa 5
grep "5" datafile

# c) In các hàng không chứa 3
grep -v "3" datafile

# d) In các hàng cuối là 3
grep -E "3$" datafile

# e) In các hàng bắt đầu với “H”
grep "^H" datafile

# f) In các hàng vừa chứa 5 và hàng cuối là 3
grep -E "5.*3$" datafile

# g) Lọc lấy hàng chứa”HN” cất vào file tên hn
grep "HN" datafile > hn