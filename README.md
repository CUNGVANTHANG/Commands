# Commands
## Mục lục

| Số thứ tự | Câu lệnh | Tác dụng | |
| :--- | :--- | :--- | :--- |
| [1](#1-câu-lệnh-ls) | [`ls`](#1-câu-lệnh-ls) | | |
| [2](#2-câu-lệnh-pwd) | [`pwd`](#2-câu-lệnh-pwd) | | |
| [3](#3-câu-lệnh-cd) | [`cd`](#3-câu-lệnh-cd) | | |
| [4](#4-câu-lệnh-clear) | [`clear`](#4-câu-lệnh-clear) | | |
| [5](#5-câu-lệnh-mkdir) | [`mkdir`](#5-câu-lệnh-mkdir) | | |
| [6](#6-câu-lệnh-touch) | [`touch`](#6-câu-lệnh-touch) | | |
| [7](#7-câu-lệnh-vi) | [`vi`](#7-câu-lệnh-vi) | | |
| [8](#8-câu-lệnh-cat) | [`cat`](#8-câu-lệnh-cat) | | |
| [9](#9-câu-lệnh-echo) | [`echo`](#9-câu-lệnh-echo) | | |
| [10](#10-câu-lệnh-tail) | [`tail`](#10-câu-lệnh-tail) | |
| [11](#11-câu-lệnh-grep) | [`grep`](#11-câu-lệnh-grep) | |
| [12](#12-câu-lệnh-cp) | [`cp`](#12-câu-lệnh-cp) | |


- [A. Các lệnh Linux cơ bản](#a-các-lệnh-linux-cơ-bản)
  - [I. Lệnh ls, cd, clear](#i-lệnh-ls-cd-clear)
    - [1. Câu lệnh ls](#1-câu-lệnh-ls)
    - [2. Câu lệnh pwd](#2-câu-lệnh-pwd)
    - [3. Câu lệnh cd](#3-câu-lệnh-cd)
    - [4. Câu lệnh clear](#4-câu-lệnh-clear)
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
  - [VI. Lệnh man, wget, apt](#vi-lệnh-man-wget-apt)
    - [1. Câu lệnh man](#1-câu-lệnh-man)
    - [2. Câu lệnh wget](#2-câu-lệnh-wget)
    - [3. Câu lệnh apt](#3-câu-lệnh-apt)
  - [VII. Lệnh kill, ping, uname, passwd](#vii-lệnh-kill-ping-uname-passwd)
    - [1. Câu lệnh kill](#1-câu-lệnh-kill)
    - [2. Câu lệnh ping](#2-câu-lệnh-ping)
    - [3. Câu lệnh uname](#3-câu-lệnh-uname)
    - [4. Câu lệnh passwd](#4-câu-lệnh-passwd)
  - [VIII. Lệnh top, df, free](#viii-lệnh-top-df-free)
    - [1. Câu lệnh top](#1-câu-lệnh-top)
    - [2. Câu lệnh df](#2-câu-lệnh-df)
    - [3. Câu lệnh free](#3-câu-lệnh-free)
- [B. Các lệnh git cơ bản](#b-các-lệnh-git-cơ-bản)

## A. Các lệnh linux cơ bản
[:arrow_up: Mục lục](#mục-lục)

Tham khảo các lệnh linux phần 1 [tại đây](https://www.hostinger.com/tutorials/linux-commands)

Tham khảo các lệnh linux phần 2 [tại đây](https://linuxapt.com/blog/161-find-out-which-groups-a-user-belongs-to-in-ubuntu-20-04)

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

### 2. Câu lệnh pwd
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `pwd` | Cho biết đường dẫn thư mục hiện tại |

### 3. Câu lệnh cd
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

### 4. Câu lệnh clear
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``clear`` | Dọn sạch màn hình Terminal |

### 5. Câu lệnh mkdir
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``mkdir [thư_mục]`` | Tạo 1 thư mục trống |
| ``mkdir -p [thư_mục_1/thư_mục_2/thư_mục_3]`` | Tạo thư mục 1 chứa thư mục 2, thư mục 2 chứa thư mục 3 |
| ``rmdir [thư mục]/`` | Xóa 1 thư mục trống |

### 6. Câu lệnh touch
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``touch [tên_file]`` | Tạo 1 file trống |

### 7. Câu lệnh vi
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| ``vi`` | Truy cập vào Vim |

:arrow_right:Truy cập vào đây: [Làm việc với Vim](https://itplusx.info/su-dung-vim-co-ban-toi-nang-cao/)

### 8. Câu lệnh cat
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `cat [tên_file]` | Mở file và in nội dung của file ra `stout` |
| `cat [tên_file_1] [tên_file_2]` | Mở 2 file và in ra nội dung của 2 file ra `stout` |
| `cat [tên_file_1] [tên_file_2] > [tên_file_mới]` | Nối nội dung 2 file và ghi vào file mới |

*Chú ý*: Thực hiện 1 câu lệnh, nội dung in ra trực tiếp trên terminal. Người ra gọi là in ra đầu ra tiêu chuẩn là `stout` 

### 9. Câu lệnh echo
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `echo 123` | In ra `stout` là 123 |
| `echo "Hello World!"` | In ra `stout` là Hello World!` |
| `echo "<h1>Hello World</h1>" > [tên_file_mới]` | Ghi đè nội dung vào file mới |
| `echo "<h1>Hello World</h1>" >> [tên_file_mới]` | Ghi thêm vào nội dung vào file mới 

*Ví dụ:*

`[tên_file_mới]` : `index.html`

### 10. Câu lệnh tail
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

### 11. Câu lệnh grep
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `grep` dùng để tìm kiếm 

Ví dụ:
`echo "Hello World!" | grep "Hello"`

In ra trên `stout`

**Hello** World!

- Tham khảo `grep` [tại đây](https://viblo.asia/p/tim-hieu-ve-lenh-grep-trong-linux-DZrGNNDdGVB)

### 12. Câu lệnh cp
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

### 13. Câu lệnh mv
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

### 14. Câu lệnh rm
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

### 15. Câu lệnh rmdir
[:arrow_up: Mục lục](#mục-lục)

| Câu lệnh | Tác dụng |
| :--- | :--- |
| `rm [tên_thư_mục_trống]` | Xóa thư mục trống |

### 16. Câu lệnh sudo
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

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
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `apt` là một công cụ dòng lệnh để xử lý các thư viện Công cụ gói nâng cao (APT) trong Linux. Nó cho phép bạn truy xuất thông tin và các gói từ các nguồn được xác thực để quản lý, cập nhật, xóa và cài đặt phần mềm cũng như các phần phụ thuộc của nó.

**Cú pháp:**

```
apt [options] (command)
```

*Ví dụ:**

```
apt install nodejs
```

### 22. Câu lệnh kill
[:arrow_up: Mục lục](#mục-lục)

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

### 23. Câu lệnh ping
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `ping` dùng kiểm tra xem mạng hoặc máy chủ có thể truy cập được hay không.

*Ví dụ:*

```
ping google.com.vn
```

<img src="https://github.com/CUNGVANTHANG/Commands/assets/96326479/9d722d38-0c40-46c9-9652-8e6aef33b9ff" height=150px>

*Dùng phím tắt `Ctr + C` để tắt*

### 24. Câu lệnh uname
[:arrow_up: Mục lục](#mục-lục)

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

### 25. Câu lệnh passwd
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `passwd` dùng để đổi mật khẩu

**Cú pháp:**

```
passwd
```

### 26. Câu lệnh top
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `top` dùng để hiển thị tất cả các tiến trình đang chạy và chế độ xem thời gian thực động của hệ thống hiện tại. Nó tổng hợp việc sử dụng tài nguyên, từ việc sử dụng CPU đến bộ nhớ.

**Cú pháp:**

```
top
```

hoặc

```
htop
```

### 27. Câu lệnh df
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `df` dùng để hiện thị mức sử dụng dung lượng ổ đĩa của hệ thống, được hiển thị bằng phần trăm và kilobyte (KB)

**Cú pháp:**

```
df -h
```

### 28. Câu lệnh free
[:arrow_up: Mục lục](#mục-lục)

Câu lệnh `free` dùng để xem RAM và SWAP

**Cú pháp:**

```
free -h
```

# B. Các lệnh git cơ bản
[:arrow_up: Mục lục](#mục-lục)
