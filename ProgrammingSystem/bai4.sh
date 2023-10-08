# Kiểm tra 3 tham số đầu vào
if [ $# -ne 3 ]; then
	echo "Vui lòng nhập lại 3 tham số: [Đường_dẫn] [Số_thứ_tự_dòng_bắt_đầu] [Số_lượng_dòng_in_ra]"
	exit
fi

# Gán giá trị cho biến
file_path=$1
start=$2
quantity=$3

# Kiểm tra đường dẫn có tồn tại
if [ -e $file_path ]; then
	tail -n +$start $file_path | head -n $quantity
else
	echo "Đường dẫn không tổn tại. Vui lòng nhập lại"
fi
