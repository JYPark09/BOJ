#! /bin/bash

target=$1
src=${target}.cc
executable=${target}.out

g++ --std=c++1z -o ${executable} ${src}
./${target}.out < input

rm ${executable}

