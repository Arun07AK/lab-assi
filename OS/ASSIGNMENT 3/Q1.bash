#!/bin/bash
echo "enter the first number "
read a 
echo "enter the second number "
read b
sum=$(expr $a + $b)
echo "sum : $sum"

