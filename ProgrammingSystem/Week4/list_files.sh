option=$1
folder_path=$2

if [[ $option =~ ^[-]+[a-e]+$ && ${#option} -eq 2 ]]; then
    if [ -d "$folder_path" ]; then
        case $option in
            "-a")
                ls -p "$folder_path" | grep "^[aA]"
            ;;
            "-b")
                string=$(ls -p "$folder_path" | grep -v /)
                if [[ "$string" == *.* ]]; then
                    echo 
                    echo "$string" | grep -E ".*[0-9]+.*$"
                else
                	echo 1
                fi
            ;;
            "-c")
            ;;
            "-d")
            ;;
            "-e")
            ;;
        esac
    else
        echo "Đường dẫn không tồn tại, vui lòng nhập lại"
    fi
else 
    echo "Option sai, vui lòng nhập lại option -[a-e]"
fi
