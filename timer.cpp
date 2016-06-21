//Below code is used to calculate the time for execution of your program
//The time, in seconds, is written on the error screen

#include <bits/stdc++.h>
using namespace std;

double tick() { 
	static clock_t oldticks;
	clock_t newticks = clock();
	double diff = 1.0 * (newticks - oldticks) / CLOCKS_PER_SEC; 
	oldticks = newticks;
	return diff;
}

int main() {

	//write your code below

	//include this at the end of your code to get the time
	cerr<<tick();
	return 0;
}