#! /bin/bash

target=$1
src=${target}.cc
executable=${target}.out

g++ --std=c++1z -o ${executable} ${src}

for i in `ls input*`
do
echo "TEST CASE \"${i}\""
./${target}.out < ${i}
done

rm ${executable}
