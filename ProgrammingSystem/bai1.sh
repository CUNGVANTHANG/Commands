# Nhập từ bàn phím đường dẫn tới file
echo "Nhập đường dẫn tới file: "
read file_path

# Kiểm tra đường dẫn file có tồn tại hay không
if [ -e "$file_path" ]; then
    echo "Đường dẫn file tồn tại."
    
    # Nếu đường dẫn file tồn tại kiểm tra file đó có quyền ghi hay không
    if [ -w "$file_path" ]; then
        echo "Bạn có quyền ghi vào file"
    else 
        echo "Bạn không có quyền ghi vào file"
    fi # Kết thúc kiểm tra 
else 
    echo "Đường dẫn file không tồn tại."
fi # Kết thúc kiểm tra