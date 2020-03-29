#! /bin/bash
FILE_NAME=$1

gcc -o $FILE_NAME $FILE_NAME.c && ./$FILE_NAME
rm $FILE_NAME