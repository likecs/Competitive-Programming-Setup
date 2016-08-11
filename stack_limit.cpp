//Below code is included to check the stack limit size on the Online Judge
//Generally inlcuded when using recursive functions, like dfs
//Most online Judges have Stack limit as 8-16 MB

#include <bits/stdc++.h>
using namespace std;

#include <sys/resource.h>

int main() {
    const rlim_t Stack_size = 32L * 1024 * 1024;
    struct rlimit lim = {Stack_size, Stack_size};
    if(setrlimit(RLIMIT_STACK, &lim) == -1) assert(false);
    
    //Write your code below

    return 0;
}