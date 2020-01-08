#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n, m ;
        cin >> n >> m ;
        int arr[n+1][m+1] = {0} ;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> arr[i][j] ;
            }
        }
        int p=1, q=1, ans=0 ,u=0 , v=0 ;

        for(int i=2; i<n; i++){
            for(int j=2; j<m; j++){
                p=i-1;
                q=j-1;
                if(arr[i-1][j]==arr[i+1][j] && arr[i][j-1]==arr[i][j+1]){
                        // cout << "sdsd" ;
                        u = 1 ;
                        v = 1 ;
                    while(p>0 && q>0){
                        if(arr[i-u][j]==arr[i+u][j] && arr[i][j-v]==arr[i][j+v])
                            ans++ ;
                        else
                            break ;
                        u++ ;
                        v++ ; 
                        if(i-u == 0) break ;
                        if(j-v == 0) break ;
                        if(i+u == n+1) break ;
                        if(j+v == m+1) break ;
                        // cout << " sdsd " ;
                    }
                }
            }
        }
        cout << n*m + ans << endl ;
    }
}