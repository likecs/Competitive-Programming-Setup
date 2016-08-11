#!/bin/bash
g++ -std=c++11 inp_generator.cpp -o inputgen
g++ -std=c++11 work.cpp -o work
g++ -std=c++11 checker.cpp -o checker
g++ -std=c++11 output_checker.cpp -o outputgen
counter=5
while [[ $counter -gt 0 ]]; do
	./inputgen
	./work
	./checker
	line=$(./outputgen)
	echo $line
	if [[ ${line:0:1} != 'S' ]]; then
		echo error
		break
	fi
	counter=`expr $counter - 1`
done
