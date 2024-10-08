#!/usr/bin/bash

path=$1

exists_file() {
  if [ -f "${path}" ]; then
    echo "Файл ${path} существует"
  else
    echo "Файл ${path} не существует"
    exit 1
  fi
}

formating_code() {
  echo "Start formating file ${path}"
  clang-format -style=file -i "${path}" || { echo "format error"; exit 1; }
  echo "Success formating file ${path}"
}

building_source() {
  echo "Start build file ${path}"
  clang++ -o "main.o" "${path}" || { echo "build error"; exit 1; }
  echo "Success build file ${path}"
}

exists_file
formating_code
building_source