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

echo -n "Enter a number: "
read n
is_prime n,m,d
if [[ $? -eq 0 ]]; then
  echo "not a prime"
else
  echo "it's a prime"
fi

