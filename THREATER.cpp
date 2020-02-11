#include <bits/stdc++.h>
#define ll int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
#define loop1(x,n) for(int j=x; j<n; j++)
#define loop2(x,n) for(int k=x; k<n; k++)
using namespace std ; 

int main(){
    fastio ;
    int t ;
    cin >> t ;
    ll netprofit = 0 ;
    while(t--){
        ll n , time ;
        cin >> n ;
        ll sum = 0 ;
        if(n != 0){
        char movie ;
        ll a[4][4] ;
        ll array[101] ;
        set<int > se ;
        set<int >::iterator itr1, itr2 ;
        loop(0,101) array[i]=0 ;
        loop(0,4) loop1(0,4) a[i][j] = 0 ;
        loop(0,n){
            cin >> movie >> time ;
            if(movie == 'A'){
                if(time == 12) a[0][0]++ ;
                if(time == 3)  a[0][1]++ ;
                if(time == 6)  a[0][2]++ ;
                if(time == 9)  a[0][3]++ ;
            } 
            if(movie == 'B'){
                if(time == 12) a[1][0]++ ;
                if(time == 3)  a[1][1]++ ;
                if(time == 6)  a[1][2]++ ;
                if(time == 9)  a[1][3]++ ;
            }
            if(movie == 'C'){
                if(time == 12) a[2][0]++ ;
                if(time == 3)  a[2][1]++ ;
                if(time == 6)  a[2][2]++ ;
                if(time == 9)  a[2][3]++ ;
            }
            if(movie == 'D'){
                if(time == 12) a[3][0]++ ;
                if(time == 3)  a[3][1]++ ;
                if(time == 6)  a[3][2]++ ;
                if(time == 9)  a[3][3]++ ;
            }
        }
        int max_sum = -400 ;
        for(int i=0; i<4; i++){
            for(int j=0; j<4 ; j++){
                if(i==j) continue ;
                for(int k=0; k<4 ; k++){
                    if(k==i || k==j) continue ;
                    for(int l=0; l<4 ; l++){
                        if(l==i || l==j || l==k) continue ;
                        sum=0;
                        int arr[4] ;
                        arr[0] = a[i][0]; arr[1] =a[j][1]; arr[2]=a[k][2];arr[3]=a[l][3];
                        sort(arr, arr+4);
                        int o=25;
                        // cout << " chala " ;
                        // cout << arr[i] << arr[j] << arr[k] << arr[l] << "  -- ";
                        for(int m=0; m<4; m++){
                            // cout << arr[m] << " " ;
                            if(arr[m] > 0) sum += arr[m]*o;
                            else sum -= 100 ;
                            o += 25 ;
                        }
                        if(sum > max_sum){
                        // cout << i << j << k << l <<"  &&   ";
                            max_sum = sum ;
                        }
                            
                    }
                }
            }
        }
        // cout << max_sum << "VA" << endl ;
        sum = max_sum ;
        }
        else
            sum -= 400 ;
            cout << sum << endl ;
            netprofit += sum ;
    }
    cout << netprofit << endl ;
}