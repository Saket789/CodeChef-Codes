#include <bits/stdc++.h>
#define ll long long int
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
    int t ;
    cin >> t ;
    while(t--){

        int m, n ;
        cin >> m >> n ;

        int a[m] , b[n] ;
        int x, y ;

        loop(0,m,i){
            cin >> x ;
            y=0;            
            while(x){
                if(x&1) y++ ;
                x >>= 1 ;
            }
            a[i] = y ;
            // cout << y << " " ;
        }     
        // cout << endl ;
        loop(0,n,i){
            cin >> x ; 
            y=0;           
            while(x){
                if(x&1) y++ ;
                x >>= 1 ;
            }
            b[i] = y ;
            // cout << y << " " ;
        }
        // cout << endl ;
        int ae=0, ao=0, be=0, bo=0 ;
        loop(0,m,i){
            if(a[i]%2 == 0) ae++ ;
            else ao++ ;
        }
        loop(0,n,i){
            if(b[i]%2 == 0) be++ ;
            else bo++ ;
        }
        int p=0, q=0, r=0;
        loop(0,n,i){
            p = b[i] ;
            if(p%2 == 0){
                // q += ae ;
                cout << ae << " " << ao << '\n' ;
                // r += ao ;
            }
            else{
                cout << ao << " " << ae << '\n' ;
            }
        }


        // cout << ae << " " << ao << " " << be << " " << bo << endl ;
        // cout << ae*be << " " << ao*bo << " " << ae*bo << " " << be*ao << endl ;
        // cout << ae*be + ao*bo << " " << ae*bo + be*ao << "\n" ;
    }
}