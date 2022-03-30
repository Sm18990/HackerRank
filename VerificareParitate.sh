#!/bin/bash

read number

declare -i remainder

remainder=$((number % 2))

if [ $remainder -eq 0 ]; then
        echo " $number is a even number"
else 
        echo " $number is an odd number"
fi
