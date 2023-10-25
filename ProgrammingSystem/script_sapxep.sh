# Kiểm tra xem đối số có phải là số nguyên không
function isInteger {
  if [[ "$1" =~ ^[0-9]+$ ]]; then
    return 0  # Trả về 0 nếu là số nguyên
  else
    return 1  # Trả về 1 nếu không phải số nguyên
  fi
}

# Kiểm tra mảng số nguyên
function checkIntArray {
  local arr=("$@")  # Lấy mảng đối số

  for number in "${arr[@]}"; do
    if ! isInteger "$number"; then
      return 1  # Trả về 1 nếu có ít nhất một phần tử không phải là số nguyên
    fi
  done

  return 0  # Trả về 0 nếu tất cả các phần tử đều là số nguyên
}

# Hàm sắp xếp số nguyên theo thứ tự từ bé đến lớn
function sortArray {
  local arr=("$@")  # Lấy mảng đối số
  local len=${#arr[@]}  # Lấy độ dài của mảng

  for ((i = 0; i < len - 1; i++)); do
    for ((j = 0; j < len - 1 - i; j++)); do
      if ((arr[j] > arr[j + 1])); then
        # Hoán đổi vị trí giữa arr[j] và arr[j + 1]
        temp=${arr[j]}
        arr[j]=${arr[j + 1]}
        arr[j + 1]=$temp
      fi
    done
  done

  # Trả về mảng đã sắp xếp
  echo "${arr[@]}"
  echo "${arr[@]}" > sapxep
}

# Ví dụ sử dụng
numbers=("$@")

if checkIntArray "${numbers[@]}"; then
  sorted_numbers=($(sortArray "${numbers[@]}"))

  echo "Mảng đã sắp xếp được lưu trong file sắp xếp: ${sorted_numbers[@]}"
else
  echo "Mảng có ít nhất một phần tử không phải số nguyên, vui lòng nhập lại"
  exit
fi