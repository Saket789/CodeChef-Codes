/**
**********************************************************************************************************************************************************************************************************************************
* @file:	Chef-chefina-and_their_friendship.cpp
* @author:	Saket vajpai
* @date:	2020年05月25日 15:52:44 Monday
* @brief:	Codechef  may-cook-off  (string-Hashing)
**********************************************************************************************************************************************************************************************************************************
**/
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
ll n;    // prime base

ll p[100005];
ll base=311;


struct str{
    string s;
    ll h[100005];

    void hsh(){
        h[0]=s[0];
        p[0]=1;
        for(int i=1;i<s.size();i++){
            h[i]=(h[i-1]*base+s[i]);
            p[i]=p[i-1]*base;
        }
    }

    ll gethash(int l,int r){
        if(l==0){
            return h[r];
        }
        return h[r]-h[l-1]*p[r-l+1];
    }

};


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        str x;
        cin>>x.s;
        x.hsh();
        int ans=0;
        int n=x.s.size()-1;

        for(int i=1;i<=n-2;i+=2){
            int pik1=i/2;
            int pik2=(n+i)/2;
//            cout<<pik1<<" "<<i<<" "<<pik2<<fl;
            if( (i+1)%2==0 && (n-i)%2==0 && x.gethash(0,pik1)==x.gethash(pik1+1,i) && x.gethash(i+1,pik2)==x.gethash(pik2+1,n) ){
                ans++;
            }
        }
//        cout<<x.gethash(4,6)<<" "<<x.gethash(7,9)<<fl;
        cout<<ans<<endl;
    }
return 0;
}


// g++ x.cpp -o as && ./as