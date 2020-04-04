
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(ll v=x; v<n; v++)
// vector<pair<int,int>> vec ;
// vector<pair<int,int>>::iterator itr, itr1 ;
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 
int dp[1000][1000] ;

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){

        ll n, m;
        cin >> n ;
        ll a, b, c ;
        // loop(1,10,j){
        //     n=j;
        if(n == 1){
              cout << 1 << endl ;
              cout << 1 << " " << 1 << endl ;
        }
        else if(n == 2){
              cout << 1 << endl ;
              cout << 2 << " " << 1 << " " << 2 << endl ;
        }
        else if(n == 3){
              cout << 1 << endl ;
              cout << 3 << " " << 1 << " " << 2 << " " << 3 << endl ;
        }
        else if(n == 4){
              cout << 2 << endl ;
              cout << 3 << " " << 1 << " " << 2 << " " << 3 << endl ;
              cout << 1 << " " << 4 << endl ;
        }
        else{
              ll ans = (n-5)/2 + (n-5)%2, i;
              cout << 2+ans << endl ;
              cout << 3 << " " << 1 << " " << 2 << " " << 3 << endl ;
              cout << 2 << " " << 4 << " " << 5 << endl ;
              i=5;
              if(ans >= 1)
              while(n-i >= 1){
                  if(n-i >= 2)
                  cout << 2 << " " << 1+i++ << " " << 1+i++ << endl ;
                  else cout << 1 << " " << 1+i++ << " " << endl ; 
              }
            //   if(n%2 == 0) cout << endl ;
        }
        // cout << endl ;
        // }
    }
}