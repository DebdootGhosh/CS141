#!/bin/bash
echo " what is your name ? "
read name
echo $name
mkdir $name
cd $name
for i in 1 2 3 4 5
do 
  echo " $i "
touch $name$i.cpp
done
