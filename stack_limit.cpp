//Below code is included to check the stack limit size on the Online Judge
//Generally inlcuded when using recursive functions, like dfs
//Most online Judges have Stack limit as 8-16 MB

#include <bits/stdc++.h>
using namespace std;

int main() {
	const rlim_t kStackSize = 8 * 1024 * 1024;   // min stack size = 8 MB
    struct rlimit rl;
    int result;

    result = getrlimit(RLIMIT_STACK, &rl);
    if (result == 0)
    {
        if (rl.rlim_cur < kStackSize)
        {
            rl.rlim_cur = kStackSize;
            result = setrlimit(RLIMIT_STACK, &rl);
            if (result != 0)
            {
                fprintf(stderr, "setrlimit returned result = %d\n", result);
            }
        }
    }

    //write your code below
    
	return 0;
}