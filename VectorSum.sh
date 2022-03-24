#!/bin/bash

declare -f sum
sum=0
read -a array
testarray=(1 2 3 4 5 6 130 8 9 10)
for i in ${testarray[@]}
do
sum=$((sum+i))
done
echo "The sum of the testArray is: $sum"
unset sum
declare -f sum
for i in ${array[@]}
do
sum=$((sum+i))
done
echo "The sum of the entered array is: $sum"
unset sum
unset array

