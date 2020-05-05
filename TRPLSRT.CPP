
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
//====================================
//====================================

vi g[N];
int a[N][N];
// int n;




int main(){
    fastio ;

    w(t)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1 ;
        
        ll n,m ;
        cin >> n ;
        cin >> m ;
        ll arr[n], brr[n]; 
        mapp mp, mp1 ;
        loop(0,n,i){
            cin >> arr[i] ;
            mp[arr[i]]=i;   // gives information of each element old index
            brr[i]=arr[i];
        }
        sort(brr,brr+n);
        vi vec;
        loop(0,n,i){
            mp1[brr[i]]=i;  // gives information of each element new index (sorted one)
            if(arr[i] != brr[i])
                vec.pb(arr[i]);
        }
        vector<tuple<ll,ll,ll> >tp ;

        loop(0,n,i){
            if(arr[i] == brr[i]) continue ;
            else{
                a = mp1[arr[i]] ;
                b = mp[brr[i]] ;
                if(brr[a] == arr[i] && brr[b] == arr[a] && brr[i] == arr[b]){   // all get good position
                    arr[b] = arr[a] ; 
                    arr[a] = arr[i] ;
                    arr[i] = brr[i] ;
                    mp[arr[b]] = b  ;
                    mp[arr[a]] = a  ;
                    tp.pb(make_tuple( i+1, a+1, b+1 ))  ;
                    ans++ ;
                }
            }
        }

        loop(0,n,i){    // two get position
            if(arr[i] == brr[i]) continue ;
            else{
                a = mp1[arr[i]] ;
                b = mp[brr[i]] ;
                if(a == b){
                    continue ;
                }
                    arr[b] = arr[a] ; 
                    arr[a] = arr[i] ;
                    arr[i] = brr[i] ;
                    mp[arr[b]] = b;
                    mp[arr[a]] = a;
                    tp.pb(make_tuple( i+1, a+1, b+1 ));
                    ans++ ;
            }
        }

        loop(0,n,i){        // only one get position 
            if(arr[i] == brr[i]) continue ;
            else{
                a = mp1[arr[i]] ;
                b = mp[brr[i]] ;
                // c = mp[a] ;
                // cout << i << " - " << a << " " << b << endl ;
                // if( arr[i] < arr[a] && arr[b] < arr[i]){
                if(a == b){
                //    deb("sd") 
                    r=i+1;
                    while(arr[r] == brr[r] && r<n) r++;
                    if(r == a && r != n-1){
                        r++;
                        while(arr[r] == brr[r] && r<n) r++; 
                    }
                    if(r == n){
                        p=1;
                        break;
                    }
                    // if(r == a){
                    //     p=1;
                    //     break;
                    // }    
                    q = arr[r];
                    arr[r] = arr[i]; 
                    arr[i]=brr[i];
                    arr[b] = q ;
                    mp[arr[b]]=b;
                    mp[arr[r]]=r;
                    tp.pb(make_tuple( i+1, r+1, b+1 ));
                    ans++ ;
                    i = r-1 ;
                    continue ;
                }
                // if(i == a || i == b || a == b) continue;
                    arr[b] = arr[a] ; 
                    arr[a] = arr[i] ;
                    arr[i] = brr[i] ;
                    mp[arr[b]] = b;
                    mp[arr[a]] = a;
                    tp.pb(make_tuple( i+1, a+1, b+1 ));
                    ans++ ;
                // }
            }
        }

        loop(1,n,i){
            if(arr[i-1] > arr[i]) p=1;
        }

        if(ans <= m && p == 0){
            cout << ans << endl ;
            for(auto it : tp){
                cout << get<0>(it) << " " << get<1>(it) << " " << get<2>(it) << endl ;
            }
        }
        else
        cout << -1 << endl ;



    }
    return 0 ;
}

// g++ TRPLSRT.CPP -o as && ./as
