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
    int t ;
    cin >> t ;
    while(t--){
        ll n, p ;
        cin >> n >> p ;
        ll arr[n] ;
        loop(0,n) cin >> arr[i] ;
        sort(arr, arr+n) ;
        bool flag = false ;
        if(n > 1){
        for(int i=n-1; i>=1; i--){
            if(p%arr[i] == 0){
            if(arr[i]%arr[i-1] != 0){
              flag = true ;
              break ;
            }
            }
            else{
              flag = true ;
              break ;
            }
        }

        if(!flag) cout << "NO" ;
        else{
            ll div , ans ;
            ll q=0;
            while(q < n && p%arr[q] == 0 ){
                q++;
            }
            if(q == n){
            ll q1 = 0 , q2=0, q3,q4, val ,val2 ;
            bool flag1 = false ;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                  if(arr[j]%arr[i] != 0){
                      ll divi = p/arr[i] ;
                      ll subb = arr[j]/arr[i] ;
                      divi = divi - subb ;
                      q3 = divi ;
                      q4 = 1 ;
                      q1 = i ;
                      q2 = j ;
                      flag1 = true ;
                      break ;
                  }
                }
                if(flag1) break ;
            }

                div = p/arr[q1] ;
                ans = div ;
            cout << "YES " ;
            loop(0,n) if(i == q1) {
              cout << q3 << " " ;
            }
            else if(i == q2){
              cout << q4 << " " ;
            }
            else cout << 0 << " " ;
            }
            else{ 
            div = p/arr[q] ;
            ans = div+1 ;
            cout << "YES " ;
            loop(0,n) if(i == q) cout << ans << " " ;
            else cout << 0 << " " ;
            }
        }
        cout << endl ;
        }
        else{
          if(p%arr[0] == 0) cout << "NO" << endl ;
          else{
              ll asd = p/arr[0] + 1 ;
              cout << "YES " << asd << endl ;
          }
        }
    }
}