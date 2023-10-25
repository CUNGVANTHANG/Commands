echo "Nhập một xâu kí tự viết hoa [A-Z]: "
read input

if [[ $input =~ ^[A-Za-z]+$ ]]; then
	if [[ $input =~ ^[A-Z]+$ ]]; then
		echo "Xâu bạn vừa nhập: $input"
		echo "Độ dài chuỗi: ${#input}" 
		lowercase=$(echo $input | tr '[A-Z]' '[a-z]')
		echo "Chuyển xâu ký tự trên thành chữ thường: $lowercase"
	else 
		echo "Vui lòng nhập lại xâu kí tự viết hoa [A-Z]" 
	fi
else
	echo "Không phải là xâu ký tự [a-z][A-Z], vui lòng nhập lại"
fi