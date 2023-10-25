read -p "Nhập từ bàn phím đường dẫn tới thư mục: " path

if [ -d "$path" ]; then
        for file in "$path"/*; do
                filename=$(awk -F '/' '{print $NF}' <<< "$file")
                if [ -f "$file" ]; then
                        if [ -x "$file" ]; then
                                echo "$filename: executable file"
                        else 
                                echo "$filename: regular file"
                        fi
                elif [ -d "$file" ]; then
                        echo "$filename: directory"
                fi
        done
else
	echo "Đường dẫn không tồn tại. Vui lòng nhập lại"
fi
