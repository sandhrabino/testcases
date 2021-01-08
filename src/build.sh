#!/bin/bash

if $# = 0
then
       echo "Usage: ./build.sh <list of files>"	

i=1;
for user in "$@" 
do
    clang -g  -fsanitize-coverage=trace-pc-guard $user -c;
    clang trace-pc-guard-cb.cc *.o -fsanitize=address
    i=$((i + 1));
done
