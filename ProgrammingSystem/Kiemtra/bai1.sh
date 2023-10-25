#!/bin/bash

# Câu a: Thêm cột trung bình tính tổng trung bình 3 môn
awk 'BEGIN {FS="\t";OFS="\t"} NR==1 {print $0, "Trungbinh"} NR>1 {
    DTB = ($4 + $5 + $6)/3;
    print $0, DTB
}' hovaten > danhsacha

# Câu b: In ra các cột 1 và 2 (tương ứng với thành phố và mã) và sắp xếp và loại bỏ bản ghi trùng lặp
awk 'BEGIN {FS="\t";OFS="\t"} NR>1 {
    print $1, $2
}' hovaten | sort -u > danhsachb

# Câu c: Lọc các hàng có "Nguyen" trong bảng và đưa vào file
sed -n '/Nguyen/p' hovaten > danhsachc

# Câu d: Tìm kết quả từ bản ghi thứ 2 (NR>1) với Toán lớn hơn 5 và Lý bé hơn 5 (tương tự trường $4 và $5)
awk 'BEGIN {FS="\t";OFS="\t"} NR>1 && $4 > 5.0 && $5 < 5.0 {
    print
}' hovaten > danhsachd

# Câu e: Định hướng chia trường input vào FS là các dấu tab, tính từ bản ghi số 2 (NR=1 là tên cột), và tính GPA theo công thức tổng toán lý hóa, ghi vào file
awk 'BEGIN {FS="\t";OFS="\t"} NR==1 {print $0, "GPA"} NR>1 {
    GPA = ($4 + $5 + $6)*4/30;
    print $0, GPA
}' hovaten > danhsache

# Câu f: Lấy phần nguyên tổng điểm rồi kiểm tra có phải số nguyên tố hay không, isPrime=1 là số nguyên tố và 0 là không phải số nguyên tố
awk 'BEGIN {FS="\t"} NR>1 {
    TongDiem = int($4 + $5 + $6);
    isPrime = 1;
    if (TongDiem <= 1) isPrime=0;
    for (i = 2; i*i <= TongDiem; i++) {
        if (TongDiem%i ==0) {
            isPrime=0;
            break;
        }
    }
    if (isPrime) {
        print
    }
}' hovaten > danhsachf
