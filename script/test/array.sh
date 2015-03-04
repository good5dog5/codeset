#!/bin/sh
files=(/tftpboot/web_hawking/htmls/*);
for file in "${files[@]}"; do
   echo $file
done

echo "There are ${#files[*]} here."
