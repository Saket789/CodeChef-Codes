#include <bits/stdc++.h>
#define ll long int
using namespace std ;
vector<int> vec ;

int main(){
    int n , q ;
    cin >> n >> q ;
    ll arr[n+1]={0} , flag1 = 0, flag2 = 0;
    int inc[n+1]={0}, dec[n+1]={0}, chng[n+1]={0} ;
    for(int i=1; i<=n; i++)
        cin >> arr[i] ;

    chng[1] = 1 ;
    for(int i=2; i<=n; i++){
        if(i == 2){
            if(arr[i] > arr[1]){  
                chng[2] = 1 ;
                }
            else chng[2] = -1 ;
        }
        if(arr[i] > arr[i-1]){
                        chng[i] = 1 ;
                    }
                else{
                        chng[i] = -1 ;
                }
    }
    vec.push_back(0) ;
    vec.push_back(1) ;
    for(int i=2; i<n; i++){
        if(chng[i] == chng[i+1] ) continue ;
        else vec.push_back(i) ;
    }
    vec.push_back(n) ;

    vector<int> :: iterator itr ;

    for(itr = vec.begin(); itr != vec.end(); itr++ )
        cout << *itr << "  " ;
    cout << endl ;

    for(int i=1; i<=n; i++){
        cout << chng[i] << " " ;
    }

    std::vector<int>::iterator low1, low2;
        int a , b ,incre ,decre;
    while(q--){

        cin >> a >> b ;
        low1 = std::lower_bound(vec.begin(), vec.end(), a) ;
        low2 = std::lower_bound(vec.begin(), vec.end(), b) ;

        cout << " -- " << *low1 << "  " << *low2 << endl;

        if(a != *low1)
            incre = low1 - vec.begin() - 1 ;
        else    
            incre = low1 - vec.begin() ;

            decre = low2 - vec.begin() ;

        if((decre - incre)%2 == 0 && decre != incre ) cout << "YES" << endl ;
        else cout << "NO" << endl ;

    }



}