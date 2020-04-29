
#include <bits/stdc++.h>
using namespace std ; 
#define ll              long long int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << "  " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              push_back
#define mk              make_pair
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
#define     pii         pair<ll,ll> 
#define  mapp           map<ll,ll> 
#define  sett           set<ll>
int dp[1000][1000] ;
ll mpow(ll base, ll exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int N = 130, M = N;
//=======================

vi g[N];
int a[N][N];
// int n;
ll maxx = 0 ;

// ll solve(ll *arr, ll *brr, ll i, ll j, ll n, ll sum){
//     if(i < 0 && j < 0){
//         maxx = max(maxx, sum) ;
//         // if(i == n-1)
//         return 0 ;
//     }
//     return max(arr[i] + max( solve(arr,brr,i-2,j-1,n,sum),  solve(arr,brr,i-2,j-2,n,sum)), brr[j] +
//      max( solve(arr,brr,i-1,j-2,n,sum) , solve(arr,brr,i-2,j-2,n,sum) ) ) ;  
//     // return max( max( arr[i] + solve(arr,brr,i+2,j+1,n,sum), brr[j] + solve(arr,brr,i+1,j+2,n,sum) ),
//     //  max( arr[i] + solve(arr,brr,i+2,j+2,n,sum), brr[j] + solve(arr,brr,i+2,j+2,n,sum) ) ) ; 
// }


int main(){
    fastio ;

        ll a=0, b=0, c=0, d=0, e=0, q=0, r=0;
        ll ans=0, res=0, cnt=0, sum=0;
        // loop(0,n,i) arr[i]=0;
        char s[100005];
        ll n,m ;
        cin >> n ;
        ll arr[n+2], brr[n+2], crr[n+1]; 
        loop(0,n,i) crr[i]=0;
        // cin >> m ;
        arr[0]=0, brr[0]=0 ;
        // cin >> s ;
        loop(0,n,i) cin >> arr[i] ;
        loop(0,n,i) cin >> brr[i] ;

        // crr[0] = max(arr[0], brr[0]) ;
        // ll i=n-1, j=n-1 ;
        // ans = solve( arr, brr, i, j, n, sum) ;

        pii p={0,0} , next={0,0} ;
        for(int i=0; i<n; i++){
            next = { max(p.first,p.second+arr[i]), max(p.second,p.first+brr[i]) };
            // cout << next.first << " " << next.second  << endl ;
            p = next ;
        }
        cout << max(p.first,p.second) << endl ; 
    return 0 ;
}

// g++ x.cpp -o as && ./as