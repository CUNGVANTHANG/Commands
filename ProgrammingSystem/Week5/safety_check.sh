# Tat ca duong dan /home/$USER
user_path="/home/$USER/*"

# echo $user_path

while [ true ]; do
	for file in $user_path; do
		if [ -f $file ]; then
			check=$(cat $file | grep -E "khung bo|bom")
			if [ "$check" ]; then
				filename=$(awk -F '/' '{print $NF}' <<< "$file")
				echo "$filename chua noi dung nguy hiem"
				echo "$filename chua noi dung nguy hiem" | mail -s "Canh bao" cvt@gmail.com
			else
				# echo "Khong co file chua noi dung nguy hiem"
				continue
			fi
		fi
	done

	echo "An toan"
	sleep 10
done
