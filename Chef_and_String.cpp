
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






int main(){
    fastio ;

    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0;
        ll ans=0, res=0, cnt=0, sum=0;
        
        string s; 
        ll n,m ;
        // cin >> n ;
        // cin >> m ;
        cin >> s ;
        // ll arr[n], brr[n]; 
        // loop(0,n,i) cin >> arr[i] ;
        n = s.length() ;

        string s1 =s+s ;
        // s.reserve();
        // cout << s1 << endl ;
        if(n <= 2){
            cout << "YES" << endl ;
        }
        else{
        loop(1,2*n-1,i){
            a=0;
            if(s1[i] == s[a]){
                while(s1[i] == s[a] && a<n && i < 2*n-1){
                // deb("as");
                // deb(i);
                    i++;
                    a++;
                }
                if(a == n) c=1;
                if(c) break;
            } 
                if(c) break;
        }

            if(c == 1) {
            cout << "YES" << endl ;
            }
            else cout << "NO" << endl ;
        }

        // if(n <= 2){
        //     cout << "YES" << endl ;
        // }
        // else{
        //     loop(1,n,i){
        //         if(s[i] != s[i-1]) q=1 ;
        //     }
        //     if(q == 1) {
        //     cout << "NO" << endl ;
        //     }
        //     else cout << "YES"<< endl ;
            
        // }




    }
    return 0 ;
}

// g++ x.cpp -o as && ./as