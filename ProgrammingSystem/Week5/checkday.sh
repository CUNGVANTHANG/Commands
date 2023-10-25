read -p "Nhập từ bàn phím ngày/tháng/năm (dd mm yyyy): " day month year
result=""

for i in {1..7}; do
	check=$(cal -m $month $year | awk -v i=$i -v day=$day '$i == day {print i}') 
	if [ -n "$check" ]; then
		result=$check
		break
	fi
done

if [ "$result" == "1" ]; then
	echo "$day/$month/$year là chủ nhật"
else 
	echo "$day/$month/$year là thứ $result"
fi
