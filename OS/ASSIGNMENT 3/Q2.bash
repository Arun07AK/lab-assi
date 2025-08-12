#!/bin/bash
echo "enter the first string "
read str1
echo "enter the first string "
read str2
if [ "$str1" == "$str2" ]; then
    echo "the strings are equal"
else
    echo "the string are not equal"
fi

