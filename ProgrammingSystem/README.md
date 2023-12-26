# MỘT SỐ LỆNH HAY DÙNG
## MỤC LỤC

- [MỘT SỐ LỆNH HAY DÙNG](#một-số-lệnh-hay-dùng)
  - [MỤC LỤC](#mục-lục)
  - [I. Kiểm tra điều kiện](#i-kiểm-tra-điều-kiện)
  - [II. Chuyển đổi](#ii-chuyển-đổi)
  - [III. Các bài thực hành và slide](#iii-các-bài-thực-hành-và-slide)
    - [1. Bài thực hành 6](#1-bài-thực-hành-6)
    - [2. Bài thực hành 7](#2-bài-thực-hành-7)

## I. Kiểm tra điều kiện

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

## III. Các bài thực hành và slide

### 1. Bài thực hành 6

**Viết chương trình ngôn ngữ c đổi một số nguyên hệ đếm 10 sang hệ đếm #2/#8/#16 sao cho**
- **Đối 1 là hệ đếm cần chuyển đổi (ví dụ: #2 cho hệ đếm 2)**
- **Đối 2 là số theo hệ đếm 10**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimalToBinary(int n) {
	if (n == 0) {
		printf("0\n");
	}

	int binary[32];
	int i = 0;
	
	while (n > 0) {
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	int j;
	for (j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Sai cu phap. Vui long nhap 2 doi so\n");
        return 1;
    }

    char *options = argv[1];

    int number = atoi(argv[2]);

    if (strcmp(options, "#2") == 0) {
        printf("%d -> ", number);
        decimalToBinary(number);
    } else if (strcmp(options, "#8") == 0) {
        printf("%d -> %o\n", number, number);
    } else if (strcmp(options, "#16") == 0) {
        printf("%d -> %x\n", number, number);
    } else {
        printf("Nhap options la: #2, #8, #16\n");
    }

    return 0;
}

```

### 2. Bài thực hành 7

1. Viết chương trình viết chương trình ngôn ngữ C tạo một file có tên “vidu.txt” chứa nội dung "Chung ta hoc ngon ngu C trong HDH Unix"
- Nội dung được nhập từ bàn phím
- Được lấy từ file “vd.txt”

Gợi ý: có thể sử dụng các hàm fopen, fclose, getchar, fgetc, fputc

```c
// Bài 1a
#include <stdio.h>
#include<string.h>

int main() {
	FILE *file;
	char content[1000]; // Do dai toi da cua noi dung

	// Mo file "vidu.txt" de ghi noi dung tu ban phim
	file = fopen("vidu.txt", "w");

	if (file == NULL) {
		printf("Khong the mo file\n");
		return 1;
	}

	char title[] = "Chung ta hoc ngon ngu C trong HDH Unix\n";
	printf("Nhap noi dung de ghi vao file: ");
	fgets(content, sizeof(content), stdin);

	// Ghi noi dung vao file
	fprintf(file, "%s", title);
	fprintf(file, "%s", content);

	// Dong file sau khi ghi
	fclose(file);
	return 0;
}
```

```c
// Bài 1b
#include <stdio.h>

int main() {
	FILE *file1;
	FILE *file2;
	char content[1000];

	// Mo file voi che do doc
	file1 = fopen("vd.txt", "r");

	if (file1 == NULL) {
		printf("Khong the mo file");
		return 1;
	}

	// Mo file voi che do ghi tiep
	file2 = fopen("vidu.txt", "a");

	if (file2 == NULL) {
		printf("Khong the mo file");
		return 1;
	}

	while (1) {
		// Lay ky tu trong file1 vd.txt
		int character = fgetc(file1);

		// Kiem tra da lay het ky tu trong file1 vd.txt
		if (character == EOF) {
			break;
		}

		// Ghi ky tu vao file2 vidu.txt
		fputc(character, file2);
	}

	printf("Thanh cong");

	// Dong file sau khi ghi
	fclose(file1);
	fclose(file2);
	return 0;
}
```

2. Viết chương trình ngôn ngữ C mở lại file “vd.txt”, di chuyển vị trí thao tác đến vị trí dòng thứ 4 và đọc nội dung của file in ra màn hình rồi đóng file.

Gợi ý: có thể sử dụng hàm fgetc hoặc fgets

```c
#include <stdio.h>

void readLineFromFile(const char *filename, int lineNumber) {
    FILE *file = fopen(filename, "r"); // Mở file để đọc

    if (file == NULL) {
        printf("Khong the mo file %s\n", filename);
        return;
    }

    char buffer[1000];
    int currentLine = 0;

    while (currentLine < lineNumber) {
        if (fgets(buffer, sizeof(buffer), file) == NULL) {
            printf("Khong du dong de doc\n");
            fclose(file);
            return;
        }
        currentLine++;
    }

    // In nội dung của dòng thứ lineNumber
    printf("Noi dung dong thu %d: %s", lineNumber, buffer);

    // Đóng file sau khi đọc
    fclose(file);
}

int main() {
    const char *filename = "vd.txt";
    int lineNumber = 4;

    readLineFromFile(filename, lineNumber);

    return 0;
}
```

3. Viết chương trình ngôn ngữ C thay đổi:
- Quyền rwx của chủ sở hữu thành rw-
- Quyền r—của nhóm người dùng thành rw-

Gợi ý: sử dụng hàm chmod


4. Viết chương trình ngôn ngữ C nhận vào tên một file và in ra kích thước của file, thông tin quyền truy nhập của file.
   
Gợi ý: có thể dùng hàm stat hoặc fstat

```c
#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Sử dụng: %s <tên_tệp_tin>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    struct stat file_info;

    // Sử dụng hàm stat để lấy thông tin về tệp tin
    if (stat(filename, &file_info) != 0) {
        perror("Lỗi khi lấy thông tin về tệp tin");
        return 1;
    }

    // In ra kích thước của tệp tin
    printf("Kích thước của tệp tin %s: %ld bytes\n", filename, file_info.st_size);

    // In ra thông tin quyền truy cập của tệp tin
    printf("Quyền truy cập của tệp tin %s: ", filename);
    printf((S_ISDIR(file_info.st_mode)) ? "d" : "-");
    printf((file_info.st_mode & S_IRUSR) ? "r" : "-");
    printf((file_info.st_mode & S_IWUSR) ? "w" : "-");
    printf((file_info.st_mode & S_IXUSR) ? "x" : "-");
    printf((file_info.st_mode & S_IRGRP) ? "r" : "-");
    printf((file_info.st_mode & S_IWGRP) ? "w" : "-");
    printf((file_info.st_mode & S_IXGRP) ? "x" : "-");
    printf((file_info.st_mode & S_IROTH) ? "r" : "-");
    printf((file_info.st_mode & S_IWOTH) ? "w" : "-");
    printf((file_info.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n");

    return 0;
}
```

