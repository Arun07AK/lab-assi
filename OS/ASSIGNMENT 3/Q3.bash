#!/bin/bash
echo "enter the n of fibanocci series "
read n
s=0
a=0
b=1
echo "$a"
echo "$b"
for((i=2;i<n;i++))
do 
    s=$(expr $a + $b)
    a=$(expr $b )
    b=$(expr $s)
    echo "$s"
done
