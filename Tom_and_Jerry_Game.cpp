
#include <bits/stdc++.h>
using namespace std ; 
#define ll              unsigned long long int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << "  " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              push_back
#define mk              make_pair
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(x,n,v)     for(ll v=x; v<n; v++)
#define loopr(n,x,v)     for(ll v=n-1; v>=x; v--)
#define mod             1000000007
#define all(x)          x.begin(), x.end()
#define clr(x)          memset(x, 0, sizeof(x))
#define sortall(x)      sort(all(x))
#define tr(it, a)       for(auto it = a.begin(); it != a.end(); it++)
#define PI              3.1415926535897932384626
#define setbits(x)      __builtin_popcount(x)
#define zrobits(x)      __builtin_ctz(x)
#define ps(x,y)         fixed << setprecision(y) << (x)
#define w(t)            int t; cin>>t; while(t--) 
#define     vi          vector<ll>
#define     vtt         vector<pair<ll,ll>> 
#define     pii         pair<ll,ll> 
#define  mapp           map<ll,ll> 
#define  sett           set<ll>
int dp[1000][1000] ;
ll mpow(ll base, ll exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int N = 130, M = N;
//====================================
//====================================








vi g[N];
int a[N][N];
// int n
int main(){
    fastio ;
    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0, len=0 ;
        ll n,m ;
        cin >> n ;

        if(n==1){
            out(0)
            continue;
        }
        if(n%2 == 1){
            out(n/2)
            continue;
        }
        else{
            cnt = setbits(n);
            if(cnt == 1){
                out(0)
                continue;
            }
            else{   
                a = n ;
                cnt=0;
                ll cnt1=0, cnt2=0 ;
                while(a%2 == 0){
                    cnt++;
                    // deb("adfa")
                    a >>= 1 ;
                }
                // a <<= 1;
                cnt++;
                len = log2(n)+1;
                b=n;
                c = (ll)1 << (len-1) ;   
                // deb(cnt) deb(len) deb(c)
                while(len != cnt){
                    if(b&c){
                        ans += 1<<(len-cnt-1);
                        // deb(ans)
                    }
                    len--;
                    c >>= 1;
                }
                out(ans)
            }
        }

    }
    return 0 ;
}

// g++ x.cpp -o as && ./as