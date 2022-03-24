#!/bin/bash

function is_prime(){
	
    for((d=2;d*d<=$1;d++))
    do
        remainder=$(($1 % $d))
        if [ $remainder -eq 0 ]; then
        return 0
        fi
    done
    return 1
}

declare -i sum
sum=0
read -a array
for i in ${array[@]}
do 
	if [ $i -ne 1 ]; then
	is_prime i
	if [ $? -eq 1 ]; then
	sum=$((sum+i))
	fi
	fi	
done
echo "Suma numerelor prime din vectorul introdus este: $sum"
unset sum


