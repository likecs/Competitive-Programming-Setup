#!/bin/bash
g++ -std=c++11 -O2 inp_generator.cpp -o inputg
g++ -std=c++11 -O2 result.cpp -o result
g++ -std=c++11 -O2 tester.cpp -o tester
g++ -std=c++11 -O2 precision_checker.cpp -o precisionc
counter=1
while [[ $counter -gt 0 ]]; do
	./inputg
	./result
	./tester
	line=$(./precisionc)
	echo $line
	if [[ ${line:0:1} != 'S' ]]; then
		echo error
		break
	fi
	counter=`expr $counter - 1`
done
