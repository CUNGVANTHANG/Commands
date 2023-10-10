# MỘT SỐ LỆNH HAY DÙNG
## MỤC LỤC

- [MỘT SỐ LỆNH HAY DÙNG](#một-số-lệnh-hay-dùng)
  - [MỤC LỤC](#mục-lục)
  - [I. Kiểm tra điều](#i-kiểm-tra-điều)
  - [II. Chuyển đổi](#ii-chuyển-đổi)

## I. Kiểm tra điều 

*Ví dụ:*

```
# if [ Điều_kiện ]; then
    # Commands
# fi

# Kiểm tra là số
if [[ $number =~ ^[0-9]+$ ]]; then
  echo "Đúng"
else
  echo "Sai"
fi
```


| STT | Điều kiện | Code |
| :---: | :---: | :---: |
| 1 | Kiểm tra là số nguyên | `[ $number =~ ^[0-9]+$ ]` |
| 2 | Kiểm tra là chuỗi [a-z][A-Z] | `[ $string =~ ^[A-Za-z]+$ ]` |
| 3 | Kiểm tra là chuỗi viết hoa [A-Z] | `[ $string =~ ^[A-Z]+$ ]` |
| 4 | Kiểm tra là chuỗi viết thường [a-z] | `[ $string =~ ^[a-z]+$ ]` |
| 5 | Kiểm tra biến có giá trị | `-z $variable` |
| 6 | Kiểm tra tệp có tồn tại | `-e $file_path` |
| 7 | Kiểm tra thư mục có tồn tại | `-d $folder_path` |
| 8 | intl = int2 | `intl -eq int2` |
| 9 | intl != int2 | `intl -ne int2` |
| 10 | intl > int2 | `intl -gt int2` |
| 11 | intl >= int2 | `intl -ge int2` |
| 12 | intl < int2 | `intl -lt int2` |
| 13 | intl =< int2 | `intl -le int2` |
| 14 | Xâu1 bằng xâu2 ( có khoảng trắng quanh dấu =) | `string1 = string2` |
| 15 |  Xâu1 khác xâu2 | `stringl != string2` |
| 16 |  Xâu not null | `string` |
| 17 |  Độ dài xâu zero | `-z string` |
| 18 |  Độ dài xâu nonzero | `-n string` |
| 19 |  AND | `expr1 -a expr2` |
| 20 |  OR | `expr1 -o expr2` |
| 21 |  NOT | `!expr` |
| 22 | Kiểm tra chuỗi có chứa chuỗi "substring" | `[ "$string" == *"substring"* ]` |
| 23 | Kiểm tra chuỗi bắt đầu bằng chuỗi "prefix" | `"${string}" = "prefix"*` |
| 24 | Kiểm tra chuỗi kết thúc bằng chuỗi "suffix" | `"${string}" = *"suffix"` |
| 25 | Kiểm tra số thực | `[ "${number}" =~ ^[0-9]+(\.[0-9]+)?$ ]` |
| 26 | Kiểm tra một chuỗi IPv4 hợp lệ hay không | `[ "${ip}" =~ ^[0-9]+\.[0-9]+\.[0-9]+\.[0-9]+$ ]` |
| 27 | Kiểm tra một chuỗi email có hợp lệ | `[ "${email}" =~ ^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,4}$ ]` |
| 28 | Kiểm tra chẵn lẻ | `$((number % 2)) -eq 0` |
| 29 | Kiểm tra option -a -b -c -d -e | `[ $option =~ ^[-]+[a-e]+$ && ${#option} -eq 2 ]` |

## II. Chuyển đổi

| STT | Chuyển đổi | Code |
| :---: | :---: | :---: |
| 1 | Chữ hoa sang chữ thường | `lowercase=$(echo $string \| tr '[A-Z]' '[a-z]')` |
| 2 | Chữ thường sang chữ hoa | `uppercase=$(echo $string \| tr '[a-z]' '[A-Z]')` |
| 3 | Số thập phân sang thập lục phân | `hexadecimal=$(printf "%x" $decimal)` |

