/**
**********************************************************************************************************************************************************************************************************************************
* @file:	x.cpp
* @author:	Saket Vajpai
* @date:	2020-03-28 23:35:00 Saturday
* @brief:	SWPDGT
**********************************************************************************************************************************************************************************************************************************
**/

#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(ll v=x; v<n; v++)
    // vector<pair<int,int>> vec ;
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
        cin >> n >> m ;

        ll n1=n, m1=m, ct1=0,ct2=0 ;
        while(n1){
            ct1++;
            n1 /= 10 ;
        }
        while(m1){
            ct2++;
            m1 /= 10 ;
        }
        ll a1[ct1], a2[ct2] ;
        n1=n;
        m1=m;
        int i=0, j=ct1+ct2;
        // deb(j); 
        while(n1){
            a1[i++] = n1%10 ;
            n1 /= 10 ;
        }
        i=0;
        while(m1){
            a2[i++] = m1%10 ;
            m1 /= 10 ;
        }
        // deb(i); 
        // deb(a[0]); 
        // deb(a[1]); 
        reverse(a1,a1+ct1);
        reverse(a2,a2+ct2);

        ll ans =0;

        if(ct1 == 1 && ct2 == 1){
            ans = a1[0]+a2[0] ;
        }
        if(ct1 == 1 && ct2 == 2){
            if(a1[0] > a2[0]){
                ans = a1[0]*10 + a2[0]+a2[1] ; 
            }
            else{
                ans = a2[0]*10 + a1[0]+a2[1] ; 
            }
        }
        if(ct1 == 2 && ct2 == 1){
            if(a2[0] > a1[0]){
                ans = a2[0]*10 + a1[0]+a1[1] ; 
            }
            else{
                ans = a1[0]*10 + a2[0]+a1[1] ; 
            }
        }
        if(ct1 == 2 && ct2 == 2){
            // cout << a1[0] << " - " << a2[0] << endl ;
            // cout << a1[1] << " - " << a2[1] << endl ;
            ll a = a1[0]*10 + a2[0]*10 + a1[1]+a2[1] ; 

            ll b = a1[1]*10 + a1[0]*10 + a2[0]+a2[1] ;            

            ll c = a2[0]*10 + a2[1]*10 + a1[0]+a1[1] ;          

            // ll e = a1[1]*10 + a2[1]*10 + a1[0] + a2[0] ;
            // cout << a << " " << b << " "<< c << endl ;;
            ll d = max(a,b);
            // e = max(d,e);
            ans = max(d,c) ;  
        }
        
        cout << ans << endl ;

        // ll a, b, c, d , n1=n, m1=m;
        // if(n < m){
        //     n1=m; m1=n;
        //     n=m1; m=n1;
        // } 

    }
}


