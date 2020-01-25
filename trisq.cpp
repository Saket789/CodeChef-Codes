#include <bits/stdc++.h>
using namespace std ;

int recus(int b, int res){
    if(b <= 3) return 0 ;
    if(b == 5 || b == 4) return 1 ;
    int a=1 , c, d=0 ;
    c = b/2 ;
    while(d <= c){
        a = d ;
        d = d+2 ;
    }
    // cout << " as " << a << " res " << res ;
    return (a/2)*(a/2) + 2*recus( b-a , res ) ;
    // return res ;
}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int b ;
        cin >> b ;
        int res = 0 ; 
        int ans = recus(b,res) ;
        cout << ans << endl ;
    }
}