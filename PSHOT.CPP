#include <bits/stdc++.h>
// #define ll long long
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
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;

        int cnt1=0, cnt2=0 , lft=0, diff=0;
        
        int len = s.length() ;

        loop(0,len,i){

            if(i%2 == 0)  if(s[i]=='1') cnt1++ ;
            if(i%2 == 1)  if(s[i] == '1') cnt2++ ;

            diff = abs(cnt1-cnt2) ;

            if(i == len-1) cout << i+1 << endl ;
            else if(i%2 == 0){
                lft = (len - i-1)/2 ;
                // cout << i << " " ;
                if(cnt1 < cnt2){
                    
                if(diff > lft){
                    cout << i+1 << endl ;
                    break ;
                } 
                    
                }
                if(cnt1 > cnt2){
                if(diff > lft+1){
                    cout << i+1 << endl ;
                    break ;
                } 
                    
                }
            }
            else{
                lft = (len - i-1)/2 ;   
                if(diff > lft){
                    cout << i+1 << endl ;
                    break ;
                } 
            }
        }
    }
}