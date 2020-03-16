#include <bits/stdc++.h>
#define ll long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
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
            
        ll n, m ;
        cin >> n >> m ;
        vector<pair<ll,ll> > vec ;
        vector<pair<ll,ll> >::iterator itr, itr1 ;
        ll arr[n+1] ;
        ll temp ;
        loop(1,n+1,i){
            cin >> temp ;
            arr[i] = temp ;
            vec.pb(make_pair(i,temp));
        }
        ll x1, x2, y ;
        while(m--){
            cin >> x1 >> x2 >> y ;
            // cout << x1 << " " << x2 <<" " <<  y << endl;
            bool f1 = false, f2 = false ;
            int cnt1=0 , cnt2=0;
            for(int i=x1; i<=x2; i++){
                if(arr[i] == y){
                    cnt1++;
                    continue ;
                }
                else if(arr[i] < y){
                    f1 = true ;
                    while(i <= x2){
                        if(arr[i] > y && f1 ){
                            f1 = false ;
                            f2 = true ;
                            cnt1++ ;
                        }
                        if(arr[i] < y && f2){
                            f1=true ;
                            f2=false ;
                            cnt1++ ;
                        } 
                        i++;
                    }
                    if(arr[i-1] == y) cnt1++ ;
                }
                else{
                    f1 = true ;
                    while(i <= x2){
                        if(arr[i] < y && f1 ){
                            f1 = false ;
                            f2 = true ;
                            cnt2++ ;
                        }
                        if(arr[i] > y && f2){
                            f1=true ;
                            f2=false ;
                            cnt2++ ;
                        } 
                        i++;
                    }
                    if(arr[i-1] == y) cnt2++ ;
                }
            }
            // cout << cnt1 << " " << cnt2 << endl ;
            cout << cnt1+cnt2 << endl ;
        }

    }
}
     
     
     
     
     
        // while(m--){
        //     cin >> y1 >> y2 >> x ;
        //     for(int i=1; i<n; i++){
        //         if(vec[i-1].second == x){
        //             if(vec[i-1].first == y1){
        //                 loop( i+1, n+1, j){

        //                 }
        //             }
        //         }
        //         else if(vec[i-1].second <= x && vec[i].second >= x){
        //             // pehle ek + phir - + - 
        //             // similarly we will check second

                    

        //         }
        //         else if(vec[i-1].second >= x && vec[i].second <= x){

        //         }
        //         else
        //             continue ;
        //     }
        // }