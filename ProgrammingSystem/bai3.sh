# Kiểm tra xem có đủ số lượng tham số đầu vào hay không (cần 2 tham số)
if [ $# -ne 2 ]; then
	echo "Vui lòng nhập lại 2 số A và B"
	exit 1
fi

echo "A = $1"
echo "B = $2"

# Lấy hai số từ tham số dòng lệnh
number1=$1
number2=$2

# Tính tổng, hiệu, tích
tong=$((number1 + number2))
hieu=$((number1 - number2))
tich=$((number1 * number2))

# In tổng, hiệu, tích 
echo "A + B = $tong"
echo "A - B = $hieu"
echo "A x B = $tich"