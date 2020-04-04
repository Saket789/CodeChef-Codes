
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
        // cin >> m ;
        ll arr[n] ;
        loop(0,n,i) cin >> arr[i];   

        int i=0,k=0;
        while(arr[i] != 1) i++;
        bool f=false ;
        k=i-1;
        loop(i,n,j){
            if(arr[j] == 1){
                if(j-k >= 6 ){
                    k=j;
                    continue ;
                }
                else{
                    f=true;
                     break ;
                }
            } 
        }
        if(f) cout << "NO" << endl ;
        else cout << "YES" << endl ;
    }
}