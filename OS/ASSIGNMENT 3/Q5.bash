#!/bin/bash
echo "first line" > file.txt       # creates file.txt with 1 line
echo "second line" >> file.txt     # appends second line
echo "third line" >> file.txt
sum=0
while read line; do
  sum=$(expr $sum + 1)
done < file.txt
echo "no of lines : $sum"
