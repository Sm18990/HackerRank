#!/bin/bash

echo -n "Introduceti un numar:"
read n
declare produs
produs=1
    for((d=1;d<=$n;d++))
    do
	produs=$((produs * d))
    done
echo -e "Valoarea lui $n! este: $produs\n "

n=$((n-1))
produs=$((produs / n))
echo "Valoarea lui $n! este: $produs"
unset produs
unset n


