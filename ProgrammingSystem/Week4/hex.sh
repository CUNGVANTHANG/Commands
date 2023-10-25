echo "Nhập số: "
read number

if [[ $number =~ ^[0-9]+$ ]]; then
	hexNumber=$(printf "%x" $number)
	echo "Chuyển đổi hệ 10 sang 16: $hexNumber"
else
    echo "$number không phải là một số. Vui lòng nhập lại"
fi
