#!/usr/bin/bash

path=$1
echo "start build"
clang++ -o ".${path}/main" ".${path}/main.cpp"
echo "finish build"