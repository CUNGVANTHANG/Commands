# Cách lệnh Linux cơ bản
## Mục lục
- [I. Lệnh ls, cd, clear](#i-lệnh-ls-cd-clear)
  - [1. Câu lệnh ls](#1-câu-lệnh-ls)
  - [2. Câu lệnh cd](#2-câu-lệnh-cd)
  - [3. Câu lệnh clear](#3-câu-lệnh-clear)

## I. Lệnh ls, cd, clear
### 1. Câu lệnh ls

Ví dụ: 

``ls [thư mục]`` : ``ls parent``

``ls [đường_dẫn_đến_thư_mục]`` : ``ls parent/children/``

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``ls [thư_mục]`` | Cho biết nội dung cấp một bên trong của thư mục đó (Không bao gồm thư mục ẩn) |
| ``ls [đường_dẫn_đến_thư_mục]`` | Cho biết nội dung cấp một bên trong của thư mục đó (Không bao gồm thư mục ẩn) |
| ``ls`` | Cho biết nội dung cấp một bên trong của thư mục đang đứng (Không bao gồm thư mục ẩn) |
| ``ls -l`` | Cho biết nội dung cấp một và thông tin chi tiết của thư mục đang đứng (Không bao gồm thư mục ẩn) |
| ``ls -a`` | Cho biết nội dung cấp một của thư mục đang đứng (Bao gồm cả thư mục ẩn) |
| ``ls -la`` hoặc ``ls -al``| Cho biết nội dung cấp một và thông tin chi tiết về thư mục đang đứng (Bao gồm thư mục ẩn) | 
| ``ls -R`` | Cho biết nội dung các cấp của thư mục đang đứng (Không bao gồm thư mục ẩn) |

### 2. Câu lệnh cd
  
Ví dụ: 

``cd [đường_dẫn_đến_thư_mục]`` : ``cd /path/to/directory``

``cd [đường_dẫn_đến_thư_mục]``: ``cd Download/``

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``cd [đường_dẫn_đến_thư_mục]``| Di chuyển qua các thư mục |
| ``cd ``Tab Tab | Hiện thị các thư mục cần di chuyển (Lưu ý viết ``cd `` phải cách ra và tab 2 lần |
| ``cd ..`` | Di chuyển trở lại 1 cấp trong thư mục |
| ``cd ../..`` | Di chuyển trở lại 2 cấp trong thư mục |
| ``cd /`` | Quay trở về root |
| ``cd -`` | Quay trở về thư mục trước đó khi đã di chuyển |
| ``cd`` | Quay trở về account |

### 3. Câu lệnh clear

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``clear`` | Dọn sạch màn hình Terminal |

## II. Lệnh mkdir, touch, vi
### 1. Câu lệnh mkdir
| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``mkdir [thư_mục]`` | Tạo 1 thư mục trống |
| ``mkdir -p [thư_mục_1/thư_mục_2/thư_mục_3]`` | Tạo thư mục 1 chứa thư mục 2, thư mục 2 chứa thư mục 3 |
| ``rmdir [thư mục]/`` | Xóa 1 thư mục trống |

### 2. Câu lệnh touch
| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``touch [tên_file]`` | Tạo 1 file trống |

### 3. Câu lệnh vi
| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``vi`` | Truy cập vào Vim |

:arrow_right:Truy cập vào đây: [Làm việc với Vim](https://itplusx.info/su-dung-vim-co-ban-toi-nang-cao/)
