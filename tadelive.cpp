
#include <bits/stdc++.h>
using namespace std ; 
#define ll              long long int
// #define cini(x)	        scanf("%lld",&x)
// #define cins(s)	        scanf("%s",s)
#define deb(x)          cout << x << "  " ;
#define out(x)          cout << x << endl ;
#define endl            '\n'
#define pb              emplace_back
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

ll mark[1000000];   




int main(){
    fastio ;
    
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0;
        ll ans=0, res=0, cnt=0;
        // char s[100005];
        ll n,m ;
        cin >> n ;
        cin >> a ;
        ll arr[n], brr[n], diff[n];
        cin >> b ;
        // cin >> s ;
        loop(0,n,i) cin >> arr[i] ;
        loop(0,n,i) cin >> brr[i] ;

        vtt mp1, mp2 ;

        for(int i=0; i<n; i++){
            diff[i] = arr[i]-brr[i];
                if(diff[i] > 0) 
                    mp1.pb(diff[i],i);
                else
                    mp2.pb(-1*diff[i],i);
        }

        sort(mp1.begin(), mp1.end(), greater<pair<ll,ll>>());
        sort(mp2.begin(), mp2.end(), greater<pair<ll,ll>>());

        if(a<=b)
        {
            for(int i=0; i < min(a, (ll)mp1.size()); i++)
            {
                ans += arr[mp1[i].second];
                cout << arr[mp1[i].second]<<endl;;
                mark[mp1[i].second] = 1 ;
            }
            for(int i=0; i<n; i++)
            {
                if(mark[i] == 0) 
                {
                    cout << brr[i]<<endl;;
                    ans += brr[i];
                }
            }
        }
        else
        {
            for(int i=0; i < min(b, (ll)mp2.size()); i++)
            {
                ans += brr[mp2[i].second];
                mark[mp2[i].second] = 1 ;
            }
            for(int i=0; i<n; i++)
            {
                if(mark[i] == 0) 
                    ans += arr[i];
            }
        }
        cout << ans << endl ;

    return 0 ;
}

// g++ x.cpp -o as && ./as