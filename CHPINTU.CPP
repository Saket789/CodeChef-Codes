#include <bits/stdc++.h>
#define ll long int
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
    int i;
        while (t--) {
        ll n, m ;
        cin >> n >> m ;
        int f[n], p[n], sum[m] ;
            // int n = sn.nextInt();
            // f = new int[n];
            // p = new int[n];
            // int m = sn.nextInt();
            // sum = new int[m];
            for (i = 0; i < m; i++)
                sum[i]=-1;
            for (i = 0; i < n; i++)
                cin >> f[i] ;
            for (i = 0; i < n; i++)
                cin >> p[i] ;

            int c =0;
            for (i = 0; i < n && c<m; i++) {
                if (f[i] != 0) 
                {
                    sum[c]=p[i];
                    for (int j = i+1; j < n; j++) {
                        if (f[i] == f[j]) {
                            f[j] = 0;
                            sum[c] = sum[c] + p[j];
                        }
                    }
                    c++;
                }
            }
            sort(sum, sum+m);
            // for (i =0; i<m; i++)
            // cout << (sum[i]) << endl ;
            for (i =0; i<m; i++) {
                if (sum[i] != -1) {
                    cout << (sum[i]) << endl ;
                    break;
                }
            }
        }









    // int t ;
    // cin >> t ;
    // while(t--){

        // ll n, m ;
        // cin >> n >> m ;
    //     ll arr[m+1];
    //     loop(0,m+1,i) arr[i]=0 ;    // making array of different fruits = m

    //     ll a[n] , b[n] ;
    //     loop(0,n,i) cin >> a[i] ;
    //     loop(0,n,i) cin >> b[i] ;

    //     loop(0,n,i){
    //         arr[a[i]] += b[i] ;     // totaling at their base index
    //     }
    //     ll min=1000 ;
    //     loop(1,m+1,i){
    //         if(arr[i]>0 && arr[i]<min) min = arr[i] ;   // finding min where min is greater than zero
    //     }
    //     if(min==INT_MAX) min=0;
    //     cout << min <<endl ;
    // }
}