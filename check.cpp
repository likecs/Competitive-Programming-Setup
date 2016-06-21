//The below contains the brute force code for any solution
//It helps me to check the answers or find a pattern in question

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
 
const int MAX   = 100005;
const int INF   = 1000000001;
const LL  INFL  = 1000000000000000001LL;
const LL  MOD   = 1000000007LL;
const LD  EPS   = 1e-10;
const double PI = acos(-1.0);

#define pb              push_back
#define mp              make_pair
#define fi              first
#define sec             second
#define all(c)          (c).begin(),(c).end()
#define allr(c)         (c).rbegin(),(c).rend()
#define loop(c,i)       for(typeof(c.begin()) i = c.begin(); i != c.end(); i++)
#define loopr(c,i)      for(typeof(c.end()) i = c.end(); i != c.begin(); )
#define uni(a)          sort(all(a)), (a).erase(unique(all(a)),(a).end())
#define present(c,x)    ((c).find(x) != (c).end())
#define cpresent(c,x)   (find(all(c),x) != (c).end())

template<typename T> T mod(T a, T b) {return (a<b ? a : a%b);}
LL mulmod(LL a,LL b, LL m){LL q=(LL)(((LD)a*(LD)b)/(LD)m);LL r=a*b-q*m;if(r>m)r%=m;if(r<0)r+=m;return r;}
template<typename T, typename S>T expo(T e, S n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template<typename T>T power(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=mod(x*p,m);p=mod(p*p,m);n>>=1;}return x;}
template<typename T>T powerL(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=mulmod(x,p,m);p=mulmod(p,p,m);n>>=1;}return x;}
template<typename T> T InverseEuler(T a, T m){return (a==1?1:power(a,m-2,m));}
template<typename T> T gcd(T a, T b){return (b==0?a:__gcd(a,b));}
template<typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("res.txt", "w", stdout);
    #endif

    // Brute force code goes below

    // cerr<<tick();
    return 0;
}