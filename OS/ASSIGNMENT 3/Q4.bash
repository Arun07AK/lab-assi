#!/bin/bash

echo "enter the the character to be checked "
read c
case "$c" in
    "a")echo "yes";;
    *)echo "default";;
esac
