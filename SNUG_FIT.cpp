#include <bits/stdc++.h>
#define ll long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
using namespace std ; 

int main(){
    fastio ;
    int t=0; 
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;
        ll a[n], b[n] ;
        loop(0,n) cin >> a[i] ;
        loop(0,n) cin >> b[i] ;
        sort(a, a+n) ;
        sort(b, b+n) ;
        ll sum = 0 ;
        loop(0,n){
            sum = sum + min(a[i],b[i]) ;
        }
        cout << sum << endl ;
    }



}