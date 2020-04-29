
#include <bits/stdc++.h>
using namespace std ; 
#define ll              int
#define cini(x)	        scanf("%lld",&x)
#define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << "  " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              push_back
#define mk              make_pair
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v)     for(ll v=x; v<n; v++)
#define mod             1000000007
#define all(x)          x.begin(), x.end()
#define clr(x)          memset(x, 0, sizeof(x))
#define sortall(x)      sort(all(x))
#define tr(it, a)       for(auto it = a.begin(); it != a.end(); it++)
#define PI              3.1415926535897932384626
#define setbits(x)      __builtin_popcount(x)
#define zrobits(x)      __builtin_ctz(x)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(t)            int t; cin>>t; while(t--) 
#define     vi          vector<ll>
#define     vtt         vector<pair<ll,ll>> 
#define  mapp           map<ll,ll> 
#define  sett           set<ll>
int dp[100][100] ;
ll mpow(ll base, ll exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int N = 130, M = N;
//=======================

vi g[N];
int a[N][N];
// int n;







int32_t main() {    
    fastio;     
    ll n, m ;     
     cin>>n>>m;
     char a[n+3][m+3];
     
     for(ll i=1; i<=n; i++) for(ll j=1;j<=m;j++)  cin>>a[i][j];
     
     
     ll h[n+3][m+3];
     
     for(ll i=1; i<=n; i++){
         ll cnt=0;
          for(ll j=1;j<=m;j++){
               if(a[i][j]=='1')cnt++;
               else cnt=0;
               h[i][j]=cnt;
          }
     }
     for(ll j=1;j<=m;j++)h[n+1][j]=0;
     ll sum=0;
     for(ll i=n;i>0;i--){
          for(ll j=m;j>0;j--){
               h[i][j]=min(h[i][j],h[i+1][j]+1);
               
               sum+=h[i][j];
               
               
          }
     }
     cout<<sum;
     
}