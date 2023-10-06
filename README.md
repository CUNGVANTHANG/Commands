# Commands
## Mục lục A

- [A. Các lệnh Linux cơ bản](#a-các-lệnh-linux-cơ-bản)

| STT | Câu lệnh | Tác dụng | STT | Câu lệnh | Tác dụng | STT | Câu lệnh | Tác dụng |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| [1](#1-câu-lệnh-ls) | [`ls`](#1-câu-lệnh-ls) | Danh sách | [16](#16-câu-lệnh-sudo) | [`sudo`](#16-câu-lệnh-sudo) | Quyền quản trị | [31](#31-câu-lệnh-wc) | [`wc`](#31-câu-lệnh-wc) | Đếm |
| [2](#2-câu-lệnh-pwd) | [`pwd`](#2-câu-lệnh-pwd) | Đường dẫn | [17](#17-câu-lệnh-chmod) | [`chmod`](#17-câu-lệnh-chmod) | Thay đổi quyền | [32](#32-câu-lệnh-cal) | [`cal`](#32-câu-lệnh-cal) | Lịch |
| [3](#3-câu-lệnh-cd) | [`cd`](#3-câu-lệnh-cd) | Thay đổi | [18](#18-câu-lệnh-chown) | [`chown`](#18-câu-lệnh-chown) | Thay đổi sở hữu | [33](#33-câu-lệnh-who) | [`who`](#33-câu-lệnh-who) | Thông tin máy chủ |
| [4](#4-câu-lệnh-clear) | [`clear`](#4-câu-lệnh-clear) | Clear stout | [19](#19-câu-lệnh-man) | [`man`](#19-câu-lệnh-man) | Help |
| [5](#5-câu-lệnh-mkdir) | [`mkdir`](#5-câu-lệnh-mkdir) | Tạo folder | [20](#20-câu-lệnh-wget) | [`wget`](#20-câu-lệnh-wget) | Tải xuống |
| [6](#6-câu-lệnh-touch) | [`touch`](#6-câu-lệnh-touch) | Tạo file | [21](#21-câu-lệnh-apt) | [`apt`](#21-câu-lệnh-apt) | Gói |
| [7](#7-câu-lệnh-vi) | [`vi`](#7-câu-lệnh-vi) | Chế độ vim | [22](#22-câu-lệnh-ps) | [`ps`](#22-câu-lệnh-ps) | Lấy PID |
| [8](#8-câu-lệnh-cat) | [`cat`](#8-câu-lệnh-cat) | Mở/Nối file | [23](#23-câu-lệnh-kill) | [`kill`](#23-câu-lệnh-kill) | Đóng chương trình |
| [9](#9-câu-lệnh-echo) | [`echo`](#9-câu-lệnh-echo) | In stout | [24](#24-câu-lệnh-ping) | [`ping`](#24-câu-lệnh-ping) | Kiểm tra mạng |
| [10](#10-câu-lệnh-tail) | [`tail`](#10-câu-lệnh-tail) | In stout + Lắng nghe | [25](#25-câu-lệnh-uname) | [`uname`](#25-câu-lệnh-uname) | Thông tin hệ thống |
| [11](#11-câu-lệnh-grep) | [`grep`](#11-câu-lệnh-grep) | Tìm kiếm | [26](#26-câu-lệnh-passwd) | [`passwd`](#26-câu-lệnh-passwd) | Đổi mật khẩu |
| [12](#12-câu-lệnh-cp) | [`cp`](#12-câu-lệnh-cp) | Copy folder/file | [27](#27-câu-lệnh-top) | [`top`](#27-câu-lệnh-top) | Hiển thị tiến trình chạy |
| [13](#13-câu-lệnh-mv) | [`mv`](#13-câu-lệnh-mv) |  Di chuyển + Đổi tên | [28](#28-câu-lệnh-df) | [`df`](#28-câu-lệnh-df) | Hiển thị dung lượng |
| [14](#14-câu-lệnh-rm) | [`rm`](#14-câu-lệnh-rm) | Xóa folder/file | [29](#29-câu-lệnh-free) | [`free`](#29-câu-lệnh-free) | Hiển thị RAM/SWAP |
| [15](#15-câu-lệnh-rmdir) | [`rmdir`](#15-câu-lệnh-rmdir) | Xóa folder trống | [30](#30-câu-lệnh-pstree) | [`pstree`](#30-câu-lệnh-pstree) | Hiện thị cây tiến trình

## Mục lục B

- [B. Các lệnh linux nâng cao](#b-các-lệnh-linux-nâng-cao)
  - [1. Trích dẫn](#1-trích-dẫn)
  - [2. Biến](#2-biến)
  - [3. Các phép toán](#3-các-phép-toán)

- [C. Các lệnh git](#c-các-lệnh-git)

## A. Các lệnh linux cơ bản
[:arrow_up: Mục lục](#mục-lục-a)

Tham khảo các lệnh linux phần 1 [tại đây](https://www.hostinger.com/tutorials/linux-commands)

Tham khảo các lệnh linux phần 2 [tại đây](https://linuxapt.com/blog/161-find-out-which-groups-a-user-belongs-to-in-ubuntu-20-04)

### 1. Câu lệnh ls
[:arrow_up: Mục lục](#mục-lục-a)

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

### 2. Câu lệnh pwd
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `pwd` | Cho biết đường dẫn thư mục hiện tại |

### 3. Câu lệnh cd
[:arrow_up: Mục lục](#mục-lục-a)

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

### 4. Câu lệnh clear
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``clear`` | Dọn sạch màn hình Terminal |

### 5. Câu lệnh mkdir
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``mkdir [thư_mục]`` | Tạo 1 thư mục trống |
| ``mkdir -p [thư_mục_1/thư_mục_2/thư_mục_3]`` | Tạo thư mục 1 chứa thư mục 2, thư mục 2 chứa thư mục 3 |
| ``rmdir [thư mục]/`` | Xóa 1 thư mục trống |

### 6. Câu lệnh touch
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``touch [tên_file]`` | Tạo 1 file trống |

### 7. Câu lệnh vi
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``vi`` | Truy cập vào Vim |

:arrow_right:Truy cập vào đây: [Làm việc với Vim](https://itplusx.info/su-dung-vim-co-ban-toi-nang-cao/)

### 8. Câu lệnh cat
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `cat [tên_file]` | Mở file và in nội dung của file ra `stout` |
| `cat [tên_file_1] [tên_file_2]` | Mở 2 file và in ra nội dung của 2 file ra `stout` |
| `cat [tên_file_1] [tên_file_2] > [tên_file_mới]` | Nối nội dung 2 file và ghi vào file mới |

*Chú ý*: Thực hiện 1 câu lệnh, nội dung in ra trực tiếp trên terminal. Người ra gọi là in ra đầu ra tiêu chuẩn là `stout` 

### 9. Câu lệnh echo
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `echo 123` | In ra `stout` là 123 |
| `echo "Hello World!"` | In ra `stout` là Hello World!` |
| `echo "<h1>Hello World</h1>" > [tên_file_mới]` | Ghi đè nội dung vào file mới |
| `echo "<h1>Hello World</h1>" >> [tên_file_mới]` | Ghi thêm vào nội dung vào file mới 

*Ví dụ:*

`[tên_file_mới]` : `index.html`

### 10. Câu lệnh tail
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `tail [tên_file]` | In ra `stout` mặc định 10 dòng nội dung của file |
| `tail -n [số_dòng] [tên_file]` | In ra `stout` `[số_dòng]` dòng nội dung của file |
| `tail --help` | Xem các tham số của lệnh | 
| `tail -f [tên_file]` | Xem sự thay đổi của file |

*Ví dụ:*

`[số_dòng]` : `5`

`[tên_file]` : `index.html`

### 11. Câu lệnh grep
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `grep` dùng để tìm kiếm 

Ví dụ:
`echo "Hello World!" | grep "Hello"`

In ra trên `stout`

**Hello** World!

- Tham khảo `grep` [tại đây](https://viblo.asia/p/tim-hieu-ve-lenh-grep-trong-linux-DZrGNNDdGVB)

### 12. Câu lệnh cp
[:arrow_up: Mục lục](#mục-lục-a)

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

### 13. Câu lệnh mv
[:arrow_up: Mục lục](#mục-lục-a)

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

### 14. Câu lệnh rm
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `rm [tên_file]` | Xóa file |
| `rm -r [tên_thư_mục]` | Xóa thư mục có chứa file |
| `rm [đường_dẫn_file]` | Xóa file thông qua đường dẫn |
| `rm [đường_dẫn_thư_mục]` | Xóa thư mục có chứa file thông qua đường dẫn |

*Ví dụ:* 

`[đường_dẫn_thư_mục]` : `Download/`

`[đường_dẫn_file]` : `Download/index.html`

### 15. Câu lệnh rmdir
[:arrow_up: Mục lục](#mục-lục-a)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `rmdir [tên_thư_mục_trống]` | Xóa thư mục trống |

### 16. Câu lệnh sudo
[:arrow_up: Mục lục](#mục-lục-a)

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

### 17. Câu lệnh chmod
[:arrow_up: Mục lục](#mục-lục-a)

`chmod` dùng để thay đổi quyền đối với tệp và thư mục

Quyền sở hữu: 
1. Chủ sở hữu (**User**)
2. Nhóm sở hữu (**Group**)
3. Nhóm còn lại (**Other**)

*Ví dụ:*

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/f79f5f33-744e-456f-8d6b-d19c457b6392" height=250px>

Các thư mục trên đều thuộc chủ sở hữu `root`, nhóm sở hữu `root`

Phân quyền:
1. Đọc (Read)
2. Ghi (Write)
3. Thực thi (Execute)

*Ví dụ 1:*

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/f79f5f33-744e-456f-8d6b-d19c457b6392" height=250px>

- `drwxr-xr-x` có chữ `d` ở đằng trước nghĩa là thư mục (directory)

- `-rwxrwxrwx` có dấu `-` ở đằng trước nghĩa là file

- `lrwxrwxrwx` có chữ `l` ở đằng trước nghĩa là lối tắt (shortcuts)

*Ví dụ 2:*

```
drwxr-xr-x
```

- 3 ký tự đầu tiên `rwx` (Read-Write-Execute) thể hiện quyền hạn cho nhóm User

- 3 ký tự tiếp theo `r-x` (Read-Execute) thể hiện quyền hạn cho nhóm Group

- 3 ký tự cuối cùng `r-x` (Read-Execute) thể hiện quyền hạn cho nhóm Other

**Cú pháp sử dụng `chmod`**

```
chmod options permissions file name
```

| Permissions | Quyền sở hữu |
| :--- | :--- |
| `u` | User |
| `g` | Group |
| `o` | Other |
| `a` | All |

*Ví dụ 3: Cấp quyền hạn*

```
chmod u=rwx,g=rx,o=r myfile
```

Trong đó:
- `r` (**r**ead)
- `w` (**w**rite)
- `x` (e**x**ecute)

*Ví dụ 4: Thêm/Loại bỏ quyền hạn*

```
chmod u-r myfile
```

Loại bỏ quyền read của myfile

```
chmod u+w myfile
```

Thêm quyền write cho myfile

**Khắc phục lỗi khi ta cấp quyền hạn cho file nằm trong ổ C hoặc D:**

Ta muốn thay đổi quyền hạn file `index.html` nằm trong ổ C nhưng không được

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/71f62958-eb08-4e40-95a0-d5a42fbd7a5f" height=150px>

Khắc phục:

```
sudo vi /etc/wsl.conf
```

Bấm phím `I` để chỉnh sửa trong chế độ vi

```
[automount]
options = "metadata"
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/8c93119d-6344-4260-ace8-2b3d655155f9" height=150px>

Bấm phím `Esc` gõ `:x` để thoát khỏi chế độ vi

Mở Window PowerShell

```
wsl --shutdown
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/f4d4891e-3fd4-45aa-aedb-d5640e866280" height=150px >

**Cú pháp sử dụng `chmod` dưới dạng bát phân (0-7)**

| Con số | Ý nghĩa |
| :--- | :--- |
| `4` | Read |
| `2` | Write |
| `1` | Execute |
| `0` | No permission |

`4 + 2 + 1 = 7` nên 7 sẽ là Read-Write-Execute

`4 + 2 + 0 = 6` nên 6 sẽ là Read-Write

`0 + 2 + 1 = 3` nên 3 sẽ là Write-Execute

*Ví dụ 5: Sử dụng `chmod` dưới dạng bát phân*

```
chmod 777 index.html
```

- Số đầu tiên là `7` nghĩa là User có quyền Read-Write-Execute
- Số tiếp theo là `7` nghĩa là Group có quyền Read-Write-Execute
- Số cuối cùng là `7` nghĩa là Other có quyền Read-Write-Execute

*Ví dụ 6:*

```
chmod 531 index.js
```

- Số đầu tiên là `5` = `4 + 0 + 1` nghĩa là User có quyền Read-Execute
- Số tiếp theo là `3` = `0 + 2 + 1` nghĩa là Group có quyền Write-Execute
- Số cuối cùng là `1 = `0 + 0 + 1` nghĩa là Other có quyền Execute

### 18. Câu lệnh chown
[:arrow_up: Mục lục](#mục-lục-a)

`chown` dùng để thay đổi sở hữu

**Cú pháp:**

```
chown owner[:group] filename
```

*Ví dụ:*

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/780796cf-35d8-422a-a3d8-13e63f8e9872" height=100px >

File `index.html` đang thuộc sở hữu của User là cungvanthang, Group là cungvanthang

Ta muốn thay đổi quyền sở hữu của User là cungvanthang cho User là root

```
chown root index.html
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/cce21e38-edb9-48ca-9d89-67a4411b5b44" height=100px >

Ta muốn thay đổi quyền sở hữu của User là cungvanthang cho User là root, Group là cungvangthang cho Group là root

```
chown root:root index.html
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/511024f8-eed0-412d-bf1b-12ac9d4cf214" height=100px >

### 19. Câu lệnh man
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `man` cung cấp hướng dẫn sử dụng về bất kỳ lệnh hoặc tiện ích nào bạn có thể chạy trong Terminal, bao gồm tên, mô tả và các tùy chọn

**Cú pháp:**

```
man [command_name]
```

*Ví dụ: Xem hướng dẫn cách sử dụng lệnh tail*

```
man tail
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/fe8511da-08e1-483b-bed3-20b6208ce619" height=250px>

### 20. Câu lệnh wget
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `wget` truy xuất các tệp bằng giao thức HTTP, HTTPS và FTP. Dùng để tải xuống thông qua đường dẫn

**Cú pháp:**

```
wget [option] [url]
```

**Ví dụ:**

```
wget https://wordpress.org/latest.zip
```

### 21. Câu lệnh apt
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `apt` là một công cụ dòng lệnh để xử lý các thư viện Công cụ gói nâng cao (APT) trong Linux. Nó cho phép bạn truy xuất thông tin và các gói từ các nguồn được xác thực để quản lý, cập nhật, xóa và cài đặt phần mềm cũng như các phần phụ thuộc của nó.

**Cú pháp:**

```
apt [options] (command)
```

*Ví dụ:**

```
apt install nodejs
```

### 22. Câu lệnh ps
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `ps aux` để lấy PID và hiện các tiến trình đang chạy

### 23. Câu lệnh kill
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `kill` để đóng chương trình không phản hồi theo cách thủ công. Nó sẽ báo hiệu các ứng dụng hoạt động sai và hướng dẫn chúng đóng các tiến trình của chúng.

**Cú pháp:**

```
kill [signal_option] PID
```

Sử dụng câu lệnh `ps aux` để lấy PID

```
ps aux
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/0d8e3da1-4449-44d8-8e88-cd56af8df98d" height=150px>

Muốn đóng chương trình `tail -f index.html` ta sử dụng `kill`

```
kill 98
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/a357a0f6-c39e-4e0a-84a8-054ccfb3f68e" height=150px>

hoặc sử dụng `kill -9` để đóng hoàn toàn chương trình sử dụng để fix lỗi treo

```kill
kill -9 98
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/b0414e19-e546-449d-8665-66e45d1ae8cb" height=150px>

### 24. Câu lệnh ping
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `ping` dùng kiểm tra xem mạng hoặc máy chủ có thể truy cập được hay không.

*Ví dụ:*

```
ping google.com.vn
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/9d722d38-0c40-46c9-9652-8e6aef33b9ff" height=150px>

*Dùng phím tắt `Ctr + C` để tắt*

### 25. Câu lệnh uname
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `uname` in thông tin chi tiết về hệ thống và phần cứng Linux của bạn.

**Cú pháp:**

```
uname [option]
```

[option] bao gồm:

- `-a` in tất cả thông tin hệ thống
- `-s` in ra tên kenel
- `-n` in tên máy chủ nút của hệ thống
  
<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/3779f62d-76ea-44ee-8dda-9914314e1e99" height=150px>

### 26. Câu lệnh passwd
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `passwd` dùng để đổi mật khẩu

**Cú pháp:**

```
passwd
```

### 27. Câu lệnh top
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `top` dùng để hiển thị tất cả các tiến trình đang chạy và chế độ xem thời gian thực động của hệ thống hiện tại. Nó tổng hợp việc sử dụng tài nguyên, từ việc sử dụng CPU đến bộ nhớ.

**Cú pháp:**

```
top
```

hoặc

```
htop
```

### 28. Câu lệnh df
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `df` dùng để hiện thị mức sử dụng dung lượng ổ đĩa của hệ thống, được hiển thị bằng phần trăm và kilobyte (KB)

**Cú pháp:**

```
df -h
```

### 29. Câu lệnh free
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `free` dùng để xem RAM và SWAP

**Cú pháp:**

```
free -h
```

### 30. Câu lệnh pstree
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `pstree` dùng để hiển thị cây tiến trình

**Cú pháp:**

```
pstree
```

### 31. Câu lệnh wc
[:arrow_up: Mục lục](#mục-lục-a)

Câu lệnh `wc` dùng để đếm từ/ký tự...

Cú pháp: 

```
wc [OPTION] [FILE]
```

Options hay dùng:

```
wc -c file      #In ra số byte
wc -m file      #In ra số char
wc -l file      #In ra số dòng
wc -w file      #In ra số từ
```

*Ví dụ:*

```
wc /home/qtuan
# 32     37     1179 /home/qtuan
  |      |      |
record  word    char
```

### 32. Câu lệnh cal
[:arrow_up: Mục lục](#mục-lục-a)

Cài gói `sudo apt install ncal`

Cú pháp:

```
cal -m [Month] [Year]   #In ra tháng trong năm
cal -y [Year]           #In ra năm
cal -3                  #In ra 3 tháng gần nhất
```

### 33. Câu lệnh who
[:arrow_up: Mục lục](#mục-lục-a)

Lệnh `who` trả về tên người dùng, ngày, giờ và thông tin máy chủ

Cú pháp:

```
who
```

## B. Các lệnh linux nâng cao
[:arrow_up: Mục lục](#mục-lục-b)
### 1. Trích dẫn
[:arrow_up: Mục lục](#mục-lục-b)

| Siêu ký tự | Ý nghĩa |
| :---: | :---: |
| `;` | Phân tách lệnh |
| `&` | Tiến trình nền |
| `()` | Nhóm lệnh, tạo subshell |
| `{}` | Nhóm lệnh, không tạo subshell |
| `|` | Đường ống |
| `<` | Định hướng lại lối vào | 
| `>` | Định hướng lại lối ra |
| `newline` | Lệnh chấm dứt |
| space/tab | Dấu phân cách trường (word) |
| `$` | Ký tự thay biến |
| `*[1?` | Siêu ký tự shell để mở rộng tên tệp |
| `#` | Chú thích |

**1. Dấu gạch chéo**

Để trích dẫn (hoặc thoát) một ký tự duy nhất khỏi diễn giải. Dấu gạch chéo không được diễn giải nếu được đặt trong dấu nháy đơn và nó bảo vệ ký hiệu đôla ($), dấu backquote (` `)

*Ví dụ:*

```
$ echo Where are you going\?
Where are you going?
$ echo Start on this line and \ > go to the next line.
Start on this line and go to the next line.
$ echo \\
\
S echo ‘\\’
\\
$ echo ' \$5.00’
\$5.00
$ echo "\SS.00"
$5.00
```

**2. Dấu nháy đơn**

Các dấu nháy đơn phải được khớp với nhau. Chúng bảo vệ các siêu kí tự khỏi việc diễn giải. Để in một dấu nháy đơn, nó phải được đặt trong dấu nháy kép hoặc thoát
ra bằng dấu gạch chéo `\`

*Ví dụ:*

```
$ echo 'Don\'t you need $5.00?’
Don't you need $5.00?
```

**3. Dấu nháy kép**

Dấu nháy kép phải được khớp với nhau, sẽ cho phép thay thế biến và lệnh, đồng thời bảo vệ mọi siêu ký tự đặc biệt khác không bị shell thông dịch.

*Ví dụ:*

```
$ name=qtuan
$ echo "Hi $name, I'm glad to meet you!"
Hi qtuan, I'm glad to meet you
```

### 2. Biến
[:arrow_up: Mục lục](#mục-lục-b)

Các loại biến:

1. Biến môi trường (Biến toàn cục)
2. Biến người dùng (Biến cục bộ)
3. Biến tự động

**1. Biến môi trường (Biến toàn cục)**

Cách tạo biến môi trường:

```
export <tên biến không có $> = <giá trị biến>
```

*Ví dụ:*

```
export MYNAME="Tux Linux"
```

**2. Biến người dùng (Biến cục bộ)**

Cách tạo biến người dùng:

```
biến = giá trị
```

hoặc 

```
set biến = giá trị
```

Hủy biến:

```
unset biến
```

**Modify biến**

*Ví dụ: `fruit` là 1 biến lưu giá trị `'peach'`, `apple` là 1 biến rỗng

```
${variable:-word}    #Nếu biến không rỗng thì = giá trị của nó; nếu không, thay word
```

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/e16b89af-a902-4e7b-89ac-8b35cc3a57be)

```
${variable:=word}    #Nếu biến không rỗng thì = giá trị của nó; nếu không = word
```

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/7209473d-8f44-4ff4-806f-e834d3c87f75)

```
${variable:+word}    #Nếu biến không rỗng thì = word; nếu không thì rỗng.
```

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/5cb0d20c-1803-4769-af49-1b14b4e62514)

```
${variable:?word}    #Nếu biến không rỗng thì = giá trị của nó; nếu không in ra và thoát
```

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/a8c1a761-1b06-410b-81d5-72f0d5aea2f4)

**3. Biến tự động**

Là các biến do hệ thống tự động tạo ra. Biến tự động là biến chỉ đọc, tức là chúng ta chỉ được đọc giá trị của biến tự động và không được gán giá trị cho biến tự động

Biến tự động: 

```
$1, $2, $3, $4, $5, $6, $7, $8, $9
```

*Ví dụ:*

```
set word1 word2 word3
echo $1 $2 $3
#word1 word2 word3
```

Biến tự động:

```
$*      # Danh sách các thông số là toàn bộ các tham số dòng lệnh được ghép thành 1 xâu
$#      # Số lượng các thông số - chứa tổng số các tham số dòng lệnh không tính $0
$$      # Tên tiến trình đính kèm
$@      # Danh sách tham số
$?      # Mã trở lại của lệnh thực hiện cuối cùng chứa giá trị kết quả trả lại của câu lệnh trước
$!      # Tên của tiến trình được đưa ra sau cùng
```

*Ví dụ:*

```
# Đầu tiên sét tham số cho $1 $2 $3 $4 $5 $6 $7 $8
set 11 22 33 44 55 66 77 88

echo $*
# In ra tất cả tham số: 11 22 33 44 55 66 77 88

echo $#
# In ra số lượng tham số: 8

echo $$
# In ra tên tiến trình: 6777

echo $@
# In ra tất cả tham số: 11 22 33 44 55 66 77 88
```

Khi ta có hơn 10 tham số dòng lệnh: Sử dụng `shift` để lấy các tham số từ 10 trở lên

Cú pháp: 

```
shift [<số nguyên từ 1..9>]
```

*Ví dụ:*

```
set apples peaches plums #Trong đó $1 = apples, $2 = peachs, $3 = plums
shift
echo $1 #peaches - Đã bị thay đổi giá trị $1 = $2
echo $2 #plums - Đã bị thay đổi giá trị $2 = $3
```

### 3. Các phép toán
[:arrow_up: Mục lục](#mục-lục-b)

**1. Các phép toán số học** 

Bao gồm có: cộng (+), trừ (-), nhân (*), chia (/), mod (%)

Tính toán trên shell:

```
expr <biểu thức>
```

*Ví dụ:*

```
expr 1 + 4
# 5
expr 1+4
# 1+4
expr 5 + 9/3
# 8
```

**2. Phép toán kiểm tra xâu**

| Phép toán | Ý nghĩa |
| :---: | :---: |
| `string1 = string2` | Xâu1 bằng xâu2 ( có khoảng tróng quang dấu =) |
| `stringl != string2` | Xâu1 khác xâu2 |
| `string` | Xâu not null |
| `-z string` | Độ dài xâu zero |
| `-n string` | Độ dài xâu nonzero |

**3. Phép toán kiểm tra số nguyên**

| Phép toán | Ý nghĩa |
| :---: | :---: |
| `intl -eq int2` | intl = int2 |
| `intl -ne int2` | intl != int2 |
| `intl -gt int2` | intl > int2 |
| `intl -ge int2` | intl >= int2 |
| `intl -lt int2` | intl < int2 |
| `intl -le int2` | intl =< int2 |

**4. Phép toán kiểm tra logic**

| Phép toán | Ý nghĩa |
| :---: | :---: |
| `exprl1 -a expr2` | AND |
| `expr1 -o expr2` | OR |
| `!expr` | NOT |

## C. Các lệnh git nâng cao
[:arrow_up: Mục lục](#mục-lục)

### 1. Cách khắc phục lỗi 
[:arrow_up: Mục lục](#mục-lục)

**1. Các khắc phục lỗi hỗ trợ xác thực mật khẩu bị xóa trên GitHub**

Lỗi:

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/bbd6ceb8-f276-4fd6-9328-8e8f86536d32)

Khắc phục:

Bước 1: Vào **Settings/Developer Settings**

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/dc48d419-6bcc-4501-8f04-e20ca1ebc8c4)

Bước 2: Chọn **Generate new token/Generate new token (classic)**

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/0da2ed88-b9cf-410b-afb2-7a6e00e3aad2)

Bước 3: 

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/b416b44d-7f86-419d-9f29-baccd0675acb)

Bước 4: Chọn tất cả, xong **Generate token**

![image](https://github.com/CUNGVANTHANG/Commands/assets/96326479/86cf3884-1e0f-4914-869a-b6ec2d53bdf6)

Bước 5: Gõ `git remote set-url origin https://<token>@github.com/<username>/<repositories>

```
git remote set-url origin https://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@github.com/CUNGVANTHANG/Commands
```

Bước 6:

```
git push origin main
```
