echo "Nhập n người dùng: "
read n

if [ $n -lt 1 ]; then
	echo "Vui lòng nhập lại số lượng người dùng! "
	exit 1
fi

for ((i = 1; i <= n; i++))
do 
	echo "Nhập tên người:"
	read input1	
	echo "Nhập số điện thoại của bạn: "
	read input2
	format_phone="${input2:0:3}-${input2:3:3}-${input2:6}"
	echo "$input1 $format_phone" >> phonebook.txt
done
