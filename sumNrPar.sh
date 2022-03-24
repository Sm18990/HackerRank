#!/bin/bash

read n
declare -i sum
for((i=0;i<=n;i++))
do 
	remainder=$(($i %2))
	if [ $remainder -eq 0 ]; then
	sum=$(($sum + $i))
	fi
done

echo "Suma primelor $n numere pare este: $sum "
unset sum
unset n
