#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long LL;

const int mod = 1e2;
const int mod2 = 10;
const LL modl = 1e18;

//Sample program to generate 1000 random integers
//For generating some specific test case as per problems, you can refer to 
// https://github.com/likecs/Test-case-generators

int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "w", stdout);
	#endif
	srand(unsigned(time(0)));
	int t;
	t = 1000;
	printf("%d\n", t);
	while (t--) {
		int n;
		n = rand()%mod + 1;
		printf("%d\n", n);
	}
	return 0;
}