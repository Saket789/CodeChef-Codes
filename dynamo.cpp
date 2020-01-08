#include <bits/stdc++.h>
using namespace std ;
// #define fastio    ios_base::sync_with_stdio(false) ;  cin.tie(NULL) ; 
#define ll unsigned long long int

int main(){
    int t ;
    cin >> t ;
    while(t--){
    ll n, s , a, b, c , d, e, res ;
    cin >> n ;
    cin >> a ;

    s = a + 2*(ll)pow(10, n) ;
    cout << s << endl <<  flush ;
    cin >> b ;
    c = (ll)pow(10,n) - b ;
    cout << c << endl << flush ;
    cin >> d ;
    e = s - a - b - c - d ;
    cout << e << endl <<  flush ;

    cin >> res ;
    if(res == 1) continue ;
    else break ;

    }
}