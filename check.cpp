//The below contains the brute force code for any solution
//It helps me to check the answers or find a pattern in question

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX   = 1e5 + 5;
const int LIM   = 3e5 + 5;
const LD  EPS   = 1e-10;
const double PI = acos(-1.0);

#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define Assert(x) 		{if(!(x)){cerr<<"Assertion failed at line "<<__LINE__<<": "<<#x<<" = "<<(x)<<"\n";exit(1);}}
#define unique(a)       sort((a).begin(), a.end()), (a).erase(unique((a).begin(), (a).end()),(a).end())

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>void __f(const char* name, Arg1&& arg1){cout<<name<<" : "<<arg1<<"\n";}
template <typename Arg1, typename... Args>void __f(const char* names, Arg1&& arg1, Args&&... args){const char* comma=strchr(names+1,',');cout.write(names,comma-names)<<" : "<<arg1<<" , ";__f(comma+1, args...);}

double tick(){static clock_t oldt;clock_t newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt = newt;return diff;}
int ilog2(int n){return 31 - __builtin_clz(n);}
int ilog2(LL n){return 63 - __builtin_clzll(n);}
template<typename T> T gcd(T a, T b){return (b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}
template<typename T> T mod(T a, T b) {return (a<b ? a : a%b);}
template<typename T> T mod_neg(T a, T b) {return ((a%b)+b)%b;}
LL mulmod(LL a,LL b, LL m){LL q=(LL)(((LD)a*(LD)b)/(LD)m);LL r=a*b-q*m;if(r>m)r%=m;if(r<0)r+=m;return r;}
template<typename T> T expo(T e, T n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template<typename T> T power(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=mod(x*p,m);p=mod(p*p,m);n>>=1;}return x;}
template<typename T> T extended_euclid(T a, T b, T &x, T &y){T xx=0,yy=1;y=0;x=1;while(b){T q=a/b,t=b;b=a%b;a=t;t=xx;xx=x-q*xx;x=t;t=yy;yy=y-q*yy;y=t;}return a;}
template<typename T> T mod_inverse(T a, T n){T x,y;T d = extended_euclid(a, n, x, y);return (d>1?-1:mod_neg(x,n));}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("res.txt", "w", stdout);
    #endif

    // Brute force code goes below

    // cerr<<tick();
    return 0;
}