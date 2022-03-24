#!/bin/bash

read -a array
declare -i prod
prod=1
for i in ${array[@]}
do
prod=$((prod*i))
done
echo "Produsul elementelor din vector este: $prod"
unset array
unset prod
