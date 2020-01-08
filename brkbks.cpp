#include <bits/stdc++.h>
using namespace std ;

int main(){
        int t ;
        cin >> t ;
        while(t--){
            int s , w1, w2, w3 ;
            cin >> s >> w1 >> w2 >> w3 ;

            int sum = w1 + w2 + w3 , ans = 0 ;

            if(s >= sum){
                ans = 1 ;
            }
            else{
                if(s == 1){
                        // if(sum == 3) ;
                            ans = 3 ;
                        // else
                        //     ans = 0 ;
                }
                if(s == 2) {
                    if(w1 == 1 && w2 == 2)
                    ans = 3 ;
                    else
                    ans = sum%2 + sum/2 ;

                }
                if(s == 3){
                    if(sum == 6) ans = 3 ;
                    else ans = 2 ;
                }
                if(s == 4) ans = 2 ;
                if(s == 5) ans = 2 ;
            }
                cout << ans << endl ;

        }
}