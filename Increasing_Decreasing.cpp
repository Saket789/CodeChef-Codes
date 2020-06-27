

#include <bits/stdc++.h>
using namespace std ; 
#define ll              long long int
#define out(x)          cout << (x) << endl ;

int main(){
    // fastio ;
    int t;
    cin >> t ;
    while(t--)
    {
        ll a=0, b=0, c=0, d=0, e=0, p=0, q=0, r=0 ;
        ll ans=0, res=0, cnt=0, sum=0, diff=0, mul=1, val=0, k=0 ;
        // loop(0,n,i) brr[i]=0;
        // char s[100005];
        string s ;
        ll n,m ;
        cin >> n ;
        // cin >> m ;
        // cin >> s ;
        ll arr[n+1], brr[n+1]; 
        for(int i=0; i<n; i++) cin >> arr[i] ;
        sort(arr,arr+n);
        for(int i=0; i<n; i++){
            ll j=i+1;
            while(j<n-1 && arr[i]==arr[j]){
                j++;
            }
            if(j-i > 2){
                out("NO")
                p=1;
                break;
            }
            i=j;
        }
           if(p==1)     continue ;
        c=n-1;
        for(int i=0; i<n; i++){
            if(i == 0)  brr[a++]=arr[i];
            else if(arr[i] != arr[i-1]){
                brr[a++]=arr[i];
            }
            else{
                brr[c--]=arr[i];
            }
        }
        for(int i=0; i<n; i++){
            if(i<n-1 && brr[i]==brr[i+1]){
                out("NO")
                p=1;
                break;
            }
        }
        if(p==1) continue;
        out("YES");
        for(int i=0; i<n; i++) cout << brr[i] << " ";
        out("")
    }
    return 0 ;
}

// g++ x.cpp -o as && ./as