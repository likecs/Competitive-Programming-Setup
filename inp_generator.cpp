//Below code is used to generate some random test cases

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

int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "w", stdout);
	#endif
	srand(unsigned(time(0)));
	int t;
	t = 1000;
	printf("%d\n", t);
	while (t--) {
		int n, q, x, y, l, r;
		n = rand()%mod + 1;
		printf("%d\n", n);
		
		// LL n;
		// n = (LL)rand() * (LL)rand() % modl + 1;
	}
	return 0;
}