#include <bits/stdc++.h>
#define ll long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define vec vector<int> 
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

int main(){
    fastio ;
    int t , s ;
    cin >> t >> s ;
    while(t--){

        ll n ;
        cin >> n ;
        ll a[n], b[n] ;
        loop(0,n,i) cin >> a[i] ;
        loop(0,n,i) cin >> b[i] ;

        sort(a,a+n);
        sort(b,b+n);
        vector<int> v ;
        vector<int>::iterator itr ;

        bool p=true ;

        if(s == 1){
        loop(0,n,i){
            if(a[i] < b[i] && i == 0){
                v.pb(a[i]);
                v.pb(b[i]);
                continue ;
            }
            else if(a[i] < b[i] && i > 0){
                itr = find (v.begin(), v.end(), a[i]);
                if(itr != v.end()){
                v.pb(a[i]);
                v.pb(b[i]);
                continue ;
                }
                else{
                p=false;
                break ;
                }
            }
            else{
                p=false;
                break ;
            }
        }

        if(p) cout << "YES" << endl ;
        else cout << "NO" << endl ;
        }
    }
}