# a) Đổi tên Cong thành Viet
sed 's/Cong/Viet' datafile

# b) Xóa 3 dòng đầu tiên
sed '1,3d' datafile

# c) In từ dòng 5 đến dòng 9
sed -n '5,9p' datafile

# d) Xóa dòng chứa tên Mai
sed '/Mai/d' datafile

# e) Thêm dấu * vào cuối xâu “Le”
sed "s/Le/Le*/" datafile

# f) In các hàng có giá trị từ 5.0 đến 5.9

# g) Xóa các dòng bắt đầu bằng kí tự “H”
sed -n '/^H/p' datafile

# h) Xóa dòng cuối cùng của file
sed '$d' datafile

# i) Thay kí tự ‘4’ xuất hiện thứ 2 trong hàng bằng kí tự ‘5’
sed 's/4/5/2' datafile

# j) Thêm vào cuối file dòng “THE END” và lưu vào file tên datafile2
sed '$a\THE END' datafile >> datafile2