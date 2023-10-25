# Cung Văn Thắng

echo "Hello $USER"
echo "Tên máy: $HOSTNAME"
echo "Tên và phiên bản của hệ điều hành này: $(uname -a)"
echo "ID nhóm của người dùng hiện tại: $GROUPS"
echo "Ngày và giờ hiện tại: $(date)"
echo "Lịch:"
cal
echo "Danh sách tất cả các tệp trong thư mục người dùng hiện tại:"
ls ~
echo "Giá trị của biến TERM: $TERM"
echo "Giá trị của biến PATH: $PATH"
echo "Giá trị của biến HOME: $HOME"
echo "Goodbye $(date +%H:%M:%S)"

