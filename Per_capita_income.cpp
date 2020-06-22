/**
**********************************************************************************************************************************************************************************************************************************
* @file:	Per_capita_income.cpp
* @author:	saket
* @date:	2020年06月22日 16:36:16 Monday
* @brief:	Codechef june cookoff C
**********************************************************************************************************************************************************************************************************************************
**/
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
// void ipgraph(int m);
// void dfs(int u, int par);
// const int N = 130, M = N;
//====================================
//====================================

void dfs(ll source,vector<ll> graph[], vector<ll> &path, vector<bool> &status){
    path.pb(source);
    status[source]=false;
    for(int i=0; i<graph[source].size(); i++){
        if(status[graph[source][i]]){
            dfs(graph[source][i], graph, path, status);
        }
    }
}


int main(){
    fastio ;
    w(t)
    {
        string s ;
        ll n,m,u,v ;
        cin >> n ;
        cin >> m ;
        vector<ll> a(n), b(n);
        vector<float> perCapita(n);
        vector<bool> status(n);
        fill(status.begin(), status.end(), false);

        float maxPerCapita = INT_MIN ;
        loop(0,n,i)     cin >> a[i];
        loop(0,n,i){
            cin >> b[i];
            perCapita[i] = (a[i]*1.0)/(b[i]*1.0);
            maxPerCapita = max(maxPerCapita,perCapita[i]); 
        }
        loop(0,n,i){
            if(perCapita[i] == maxPerCapita) status[i]=true;
        }

        vector<ll> graph[n];
        while(m--){
            cin >> u >> v ;
            graph[u-1].pb(v-1); 
            graph[v-1].pb(u-1); 
        }

        vector<ll> res ;
        loop(0,n,i){
            if(status[i]){
                vector<ll> path;
                dfs( i, graph, path, status);
                if(path.size() > res.size()){
                    res.clear();
                    loop(0,path.size(),j)   res.pb(path[j]);
                }
            }
        }
        cout << res.size() << endl;
        loop(0,res.size(),i)    cout << res[i]+1 << " ";
        out("")
    }
    return 0 ;
}

// g++ x.cpp -o as && ./as