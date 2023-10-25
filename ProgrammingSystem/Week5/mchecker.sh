#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Sử dụng: $0 <tên người dùng>"
    exit 1
fi

username=$1

mail_path="/var/mail/$username"

previous_size=0

while [ true ]
do
    current_size=$(ls -l $mail_path | awk '{print $5}')

    if [ $current_size -gt $previous_size ]; then
        echo "Người dùng $username có thư mới."
    fi

    previous_size=$current_size

    sleep 5
done

