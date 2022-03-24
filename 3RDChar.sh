#!/bin/bash


declare -i i
i=0
read n

for((i=0;i<n;i++))
do 
read input
echo $input >> file.txt
cut -b 3 file.txt
done
echo "" > file.txt
