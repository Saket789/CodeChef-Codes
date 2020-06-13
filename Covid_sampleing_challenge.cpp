
#include <bits/stdc++.h>
using namespace std ; 
#define ll              long long int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << (x) << "  " ;
#define out(x)          cout << (x) << endl ;
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
    // fastio ;
    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0 ;
        // loop(0,n,i) brr[i]=0;
        ll n;
        double m ;
        cin >> n ;
        cin >> m ;
        ll arr[n+1][n+1], brr[n+1] ; 
        loop(1,n+1,i)   loop(1,n+1,j)   arr[i][j]=0 ;
        m = (ll)ceil(((m*(double)(n*n))/100.0)*n*n) ; 
        out(m)
        
        // loop(1,n+1,i){
        //     loop(1,n+1,j){
        //         cout << 1 << " " << i <<" " << j << " " << i << " " << j << endl ;
        //         cin >> a ;
        //         if(a == 1)  arr[i][j]=1;
        //         if(a == 0)  arr[i][j]=0;
        //         if(a == 1)  cnt++;
        //         if(cnt == m){
        //             p=1;
        //             break;
        //         }
        //     }
        //     if(p == 1) break;
        // }

        out(2)
        loop(1,n+1,i){
            loop(1,n+1,j){
                cout << arr[i][j] << " ";
            }
            out("")
        }
        cin >> p ;
        if(p == -1)  break;

    }
    return 0 ;
}

// g++ x.cpp -o as && ./as