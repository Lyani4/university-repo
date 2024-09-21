#!/usr/bin/bash

path=$1
echo "start build"
clang++ -o "main.o" ".${path}/main.cpp"
echo "finish build"