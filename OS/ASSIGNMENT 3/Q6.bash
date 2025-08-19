#!/bin/bash
echo "enter the file name with .txt"
read file
echo "its size is "
stat -c%s $file
echo "its permisson : "
stat -c%A $file
echo "its owner : "
stat -c%U $file
echo "its modification time : "
stat -c%y $file
