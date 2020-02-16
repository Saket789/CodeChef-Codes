#include <bits/stdc++.h>
#define ll long long
#define deb(x) cout << x << " " ;
#define endl '\n'
#define vec vector<int> 
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
using namespace std ; 

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){

    ll n ;
    cin >> n ;
    long tr = (long)n ;
    long int div = n/250000 ;
    long int rem = tr%250000 ; 
    ll ini=250000, cnt=1, total=0, cnt2=5 ;

    if(div < 1 || (div==1 && rem==0)) cout << n << endl ;
    else if(div <= 5 || (div == 6 && rem==0)){
        while((div-cnt) > 0){
            total = total + (ini/100)*cnt2 ;
            cnt2 += 5 ;
            // ini += 250000 ; 
            cnt++ ;
            // cout << total << "  " ;
        }
        ll diff = n - ini*div ;
        total = total + (diff*cnt2)/100 ;
        cout << n-total << endl ;
    }
    else{
        div = 6 ;
        while((div-cnt) > 0){
            total = total + (ini/100)*cnt2 ;
            cnt2 += 5 ;
            // ini += 250000 ; 
            cnt++ ;
            // cout << total << "  " ;
        }
        // cnt2 -= 5 ;
        ll diff = n - ini*div ;
        total = total + (diff*cnt2)/100 ;
        cout << n-total << endl ;
    }
    }
}