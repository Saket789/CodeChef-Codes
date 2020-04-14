
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define output(x) cout << x << endl ;
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
    // fastio ;
    int t ;
    cin >> t ;
    while(t--){

        ll n, m;
        cin >> n ;
        ll arr[n], brr[n] , ans=0, res=0;
        loop(0,n,i) cin >> arr[i];   
        vector<ll> vec; 

        loop(0,n,i){
            if(arr[i] == 0){
                brr[i]=0;
            }
            else if(arr[i]%4 == 0){
                brr[i]=4;
            }   
            else if(arr[i]%2 == 0){
                brr[i]=2;
            }   
            else
                brr[i]=1;
            // cout << brr[i] <<"  ";
        }
        ll i=0 , cnt=0 ;
        // while(i < n){
        //     cnt=0;
        //     if(brr[i] == 2){
        //         while((brr[i] != 4 || brr[i] != 0) && i<n){
        //             cnt++;
        //             i++;
        //         }
        //         ans += (cnt*(cnt+1))/2 ;
        //     }
        //     i++;
        // }
        cout << endl ;
        ll a[n], b[n] ;
        a[0]=0;
        loop(1,n,i){
            if(brr[i-1] == 4 || brr[i-1] == 0 || brr[i-1] == 2) a[i]=i;
            else a[i]=a[i-1];
        // deb(a[i]);
        }
        // loop(0,n,i) deb(a[i]);
        // cout << endl ;
        b[n-1]=n;
        for(int i=n-2; i>=0; i--){
            if(brr[i+1] == 4 || brr[i+1] == 0 || brr[i+1] == 2) b[i] = i+1 ; 
            else b[i]=b[i+1];
            // deb(b[i]);
        }
        // loop(0,n,i) deb(b[i]);
        ans=0;
        // cout << endl ;
        loop(0,n,i){
            if(brr[i] == 2){
                ans += (i-a[i]+1)*(b[i]-i);
                // deb(ans);
            }
        }
        // deb(ans);
        ll total = (n*(n+1))/2-ans ;
        cout << total << endl ;
    }
}











        