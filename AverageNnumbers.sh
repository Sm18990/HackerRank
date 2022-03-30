#!/bin/bash
read N
declare -f sum
for((i=0;i<$N;i++))
do
read x
sum=$((sum + x))
done
average=$(echo "scale = 3; $sum / $N" | bc);
echo $average
