//Below code is used to generate some random test cases

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int mod = 1e9;
const LL modl = 1e17;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "w", stdout);
	#endif
	srand(unsigned(time(0)));
	int t;
	t = 10;
	printf("%d\n", t);
	while (t--) {
		LL n;
		n = (LL)rand() * (LL)rand() % modl + 1;
		// n = rand() % mod + 1;
		printf("%lld\n", n);
	}
	return 0;
}
