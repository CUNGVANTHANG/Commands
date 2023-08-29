# Commands
## Mục lục
- [A. Các lệnh Linux cơ bản](#a-các-lệnh-linux-cơ-bản)
  - [I. Lệnh ls, cd, clear](#i-lệnh-ls-cd-clear)
    - [1. Câu lệnh ls](#1-câu-lệnh-ls)
    - [2. Câu lệnh cd](#2-câu-lệnh-cd)
    - [3. Câu lệnh clear](#3-câu-lệnh-clear)
  - [II. Lệnh mkdir, touch, vi](#ii-lệnh-mkdir-touch-vi)
    - [1. Câu lệnh mkdir](#1-câu-lệnh-mkdir)
    - [2. Câu lệnh touch](#2-câu-lệnh-touch)
    - [3. Câu lệnh vi](#3-câu-lệnh-vi)
  - [III. Lệnh cat, echo, tail, grep](#iii-lệnh-cat-echo-tail-grep)
    - [1. Câu lệnh cat](#1-câu-lệnh-cat)
    - [2. Câu lệnh echo](#2-câu-lệnh-echo)
    - [3. Câu lệnh tail](#3-câu-lệnh-tail)
    - [4. Câu lệnh grep](#4-câu-lệnh-grep)
  - [IV. Lệnh cp, mv, rm, rmdir](#iv-lệnh-cp-mv-rm-rmdir)
    - [1. Câu lệnh cp](#1-câu-lệnh-cp)
    - [2. Câu lệnh mv](#2-câu-lệnh-mv)
    - [3. Câu lệnh rm](#3-câu-lệnh-rm)
    - [4. Câu lệnh rmdir](#4-câu-lệnh-rmdir)
  - [V. Lệnh sudo, chmod, chown](#v-lệnh-sudo-chmod-chown)
    - [1. Câu lệnh sudo](#1-câu-lệnh-sudo)
    - [2. Câu lệnh chmod](#2-câu-lệnh-chmod)
    - [3. Câu lệnh chown](#3-câu-lệnh-chown)
- [B. Các lệnh git cơ bản](#b-các-lệnh-git-cơ-bản)

## A. Các lệnh linux cơ bản
Tham khảo các lệnh linux [tại đây](https://www.hostinger.com/tutorials/linux-commands)
## I. Lệnh ls, cd, clear
### 1. Câu lệnh ls
[:arrow_up: Mục lục](#mục-lục)

Ví dụ: 

``ls [thư mục]`` : ``ls parent``

``ls [đường_dẫn_thư_mục]`` : ``ls parent/children/``

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``ls [thư_mục]`` | Cho biết nội dung cấp một bên trong của thư mục đó (Không bao gồm thư mục ẩn) |
| ``ls [đường_dẫn_thư_mục]`` | Cho biết nội dung cấp một bên trong của thư mục đó (Không bao gồm thư mục ẩn) |
| ``ls`` | Cho biết nội dung cấp một bên trong của thư mục đang đứng (Không bao gồm thư mục ẩn) |
| ``ls -l`` | Cho biết nội dung cấp một và thông tin chi tiết của thư mục đang đứng (Không bao gồm thư mục ẩn) |
| ``ls -a`` | Cho biết nội dung cấp một của thư mục đang đứng (Bao gồm cả thư mục ẩn) |
| ``ls -la`` hoặc ``ls -al``| Cho biết nội dung cấp một và thông tin chi tiết về thư mục đang đứng (Bao gồm thư mục ẩn) | 
| ``ls -R`` | Cho biết nội dung các cấp của thư mục đang đứng (Không bao gồm thư mục ẩn) |

### 2. Câu lệnh cd
[:arrow_up: Mục lục](#mục-lục)

Ví dụ: 

``cd [đường_dẫn_thư_mục]`` : ``cd /path/to/directory``

``cd [đường_dẫn_thư_mục]``: ``cd Download/``

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``cd [đường_dẫn_thư_mục]``| Di chuyển qua các thư mục |
| ``cd ``Tab Tab | Hiện thị các thư mục cần di chuyển (Lưu ý viết ``cd `` phải cách ra và tab 2 lần |
| ``cd ..`` | Di chuyển trở lại 1 cấp trong thư mục |
| ``cd ../..`` | Di chuyển trở lại 2 cấp trong thư mục |
| ``cd /`` | Quay trở về root |
| ``cd -`` | Quay trở về thư mục trước đó khi đã di chuyển |
| ``cd`` | Quay trở về account |

### 3. Câu lệnh clear
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``clear`` | Dọn sạch màn hình Terminal |

## II. Lệnh mkdir, touch, vi
### 1. Câu lệnh mkdir
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``mkdir [thư_mục]`` | Tạo 1 thư mục trống |
| ``mkdir -p [thư_mục_1/thư_mục_2/thư_mục_3]`` | Tạo thư mục 1 chứa thư mục 2, thư mục 2 chứa thư mục 3 |
| ``rmdir [thư mục]/`` | Xóa 1 thư mục trống |

### 2. Câu lệnh touch
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``touch [tên_file]`` | Tạo 1 file trống |

### 3. Câu lệnh vi
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``vi`` | Truy cập vào Vim |

:arrow_right:Truy cập vào đây: [Làm việc với Vim](https://itplusx.info/su-dung-vim-co-ban-toi-nang-cao/)

## III. Lệnh cat, echo, tail, grep
### 1. Câu lệnh cat
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `cat [tên_file]` | Mở file và in nội dung của file ra `stout` |
| `cat [tên_file_1] [tên_file_2]` | Mở 2 file và in ra nội dung của 2 file ra `stout` |
| `cat [tên_file_1] [tên_file_2] > [tên_file_mới]` | Nối nội dung 2 file và ghi vào file mới |

*Chú ý*: Thực hiện 1 câu lệnh, nội dung in ra trực tiếp trên terminal. Người ra gọi là in ra đầu ra tiêu chuẩn là `stout` 

### 2. Câu lệnh echo
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `echo 123` | In ra `stout` là 123 |
| `echo "Hello World!" | In ra `stout` là Hello World!` |
| `echo "<h1>Hello World</h1>" > [tên_file_mới]` | Ghi đè nội dung vào file mới |
| `echo "<h1>Hello World</h1>" >> [tên_file_mới]` | Ghi thêm vào nội dung vào file mới 

*Ví dụ:*

`[tên_file_mới]` : `index.html`

### 3. Câu lệnh tail
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `tail [tên_file]` | In ra `stout` mặc định 10 dòng nội dung của file |
| `tail -n [số_dòng] [tên_file]` | In ra `stout` `[số_dòng]` dòng nội dung của file |
| `tail --help` | Xem các tham số của lệnh | 
| `tail -f [tên_file]` | Xem sự thay đổi của file |

*Ví dụ:*

`[số_dòng]` : `5`

`[tên_file]` : `index.html`

### 4. Câu lệnh grep
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `grep` dùng để tìm kiếm 

Ví dụ:
`echo "Hello World!" | grep "Hello"`

In ra trên `stout`

**Hello** World!

- Tham khảo `grep` [tại đây](https://viblo.asia/p/tim-hieu-ve-lenh-grep-trong-linux-DZrGNNDdGVB)

## IV. Lệnh cp, mv, rm, rmdir
### 1. Câu lệnh cp
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `cp [tên_file_gốc] [tên_file_mới]` | Copy nội dung từ file gốc sang file mới |
| `cp [tên_file_gốc] [đường_dẫn_thư_mục]` | Copy file gốc sang thư mục |
| `cp [tên_file_gốc] [đường_dẫn_file_mới]` | Copy nội dung thông qua đường dẫn từ file gốc sang file mới |
| `cp [đường_dẫn_file_gốc] [đường_dẫn_file_mới]` | Copy nội dung thông qua đường dẫn từ file gốc sang file mới |
| `cp -r [tên_thư_mục_gốc] [tên_thư_mục_mới]` | Copy nội dung thư mục gốc sang thư mục mới |
| `cp -r [đường_dẫn_thư_mục_gốc] [đường_dẫn_thư_mục_mới]` | Copy nội dung thông qua đường dẫn từ thư mục gốc sang thư mục mới |

*Ví dụ:* 

`[đường_dẫn_thư_mục]` : `Download/`

`[đường_dẫn_file_mới]` : `Download/index.html`

### 2. Câu lệnh mv
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `mv [tên_file_gốc] [tên_file_mới]` | Đổi tên file gốc thành tên file mới |
| `mv [tên_file_gốc] [đường_dẫn_thư_mục]` | Di chuyển file gốc sang thư mục thông qua đường dẫn |
| `mv [tên_file_gốc] [đường_dẫn_file_mới]` | Di chuyển file gốc sang thư mục và đổi tên file thông qua đường dẫn |
| `mv [tên_thư_mục_gốc] [đường_dẫn_thư_mục_mới]` | Di chuyển thư mục gốc sang thư mục mới và đổi tên thư mục thông qua đường dẫn |

*Ví dụ:* 

`[đường_dẫn_thư_mục]` : `Download/`

`[đường_dẫn_file_mới]` : `Download/index.html`

`[đường_dẫn_thư_mục_mới]` : `Download/Folder2`

### 3. Câu lệnh rm
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `rm [tên_file]` | Xóa file |
| `rm -r [tên_thư_mục]` | Xóa thư mục có chứa file |
| `rm [đường_dẫn_file]` | Xóa file thông qua đường dẫn |
| `rm [đường_dẫn_thư_mục]` | Xóa thư mục có chứa file thông qua đường dẫn |

*Ví dụ:* 

`[đường_dẫn_thư_mục]` : `Download/`

`[đường_dẫn_file]` : `Download/index.html`

### 4. Câu lệnh rmdir
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `rm [tên_thư_mục_trống]` | Xóa thư mục trống |

## V. Lệnh sudo, chmod, chown
### 1. Câu lệnh sudo

`sudo` cho phép thực hiện các tác vụ yêu cầu quyền quản trị hoặc quyền root

*Ví dụ:*

Tạo file index.js trong home
```
touch /home/index.js
```

Xảy ra lỗi vì không có quyền truy cập

```
touch: cannot touch '/home/index.js': Permission denied
```

Cấp quyền truy cập ta sử dụng `sudo`

```
sudo touch /home/index.js
```

### 2. Câu lệnh chmod
`chmod` dùng để thay đổi quyền đối với tệp và thư mục

Quyền sở hữu: 
1. Chủ sở hữu (**User**)
2. Nhóm sở hữu (**Group**)
3. Nhóm còn lại (**Other**)

*Ví dụ:*

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/f79f5f33-744e-456f-8d6b-d19c457b6392" height=250px>

Các thư mục trên đều thuộc quyền của chủ sở hữu `root`

Phân quyền:
1. Đọc (Read)
2. Ghi (Write)
3. 
