#!/bin/bash

echo "Enter 2 numbers: "
read X
read Y

sum=$(($X + $Y))
dif=$(($X-$Y))
prod=$(($X * $Y))
div=$(($X / $Y))

echo " $X + $Y = $sum"
echo " $X - $Y = $dif"
echo " $X * $Y = $prod"
echo " $X / $Y = $div"

unset sum dif mul div X Y

