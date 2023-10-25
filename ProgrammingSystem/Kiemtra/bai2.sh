#!/bin/bash

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

# Hàm kiểm tra xem một số có phải là số Fibonacci hay không
function is_fibonacci {
    local n=$1
    local a=0
    local b=1
    while [ $b -le $n ]; do
        if [ $b -eq $n ]; then
            return 0
        fi
        local temp=$b
        b=$((a + b))
        a=$temp
    done
    return 1  # Trả về 1 nếu không phải số Fibonacci
}

# Kiểm tra số lượng đối số
if [ "$#" -ne 20 ]; then
  echo "Vui lòng cung cấp chính xác 20 số nguyên."
  exit 1  
fi

# Lấy các đối số (số nguyên) từ $1 đến $20
args=("$@")

# Mảng để lưu các số không phải là số Fibonacci
non_fibonacci=()

for arg in "${args[@]}"; do
    if ! isInteger "$arg"; then
        echo "Lỗi: Đối số '$arg' không phải là số nguyên."
        exit 1
    fi

    if ! is_fibonacci $arg; then
        non_fibonacci+=($arg)
    fi
done

# Kiểm tra mảng chỉ có số nguyên hay không
if checkIntArray "${args[@]}"; then
    # Lưu mảng các số không phải là số Fibonacci vào tệp tin "xoafibo"
    echo "${non_fibonacci[@]}" > xoafibo
    echo "Các số không phải là số Fibonacci đã được lưu vào tệp xoafibo"
else
    echo "Mảng có ít nhất một phần tử không phải số nguyên, vui lòng nhập lại"
    exit 1
fi
