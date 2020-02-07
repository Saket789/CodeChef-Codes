#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
using namespace std ; 

int main(){
    fastio ;
    ll t ;
    cin >> t ;
    while(t--){
        ll n, k ;
        cin >> n >> k ;
        ll arr[n] ;
        loop(0,n) cin >> arr[i] ;
        ll sum = 0 ;
        loop(0,n){
            sum += arr[i] ;
        }
        ll ans = sum % k ;
        cout << ans << endl ;
    }
}