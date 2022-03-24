#!/bin/bash

read X
read Y

sum=$(($X + $Y))
dif=$(($X-$Y))
prod=$(($X * $Y))
div=$(($X / $Y))

echo $sum
echo $dif
echo $prod
echo $div

unset sum dif mul div X Y

