#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

void fun(vector< pair<int,int> > vec, int cnt){
    
    int a=2, b=2 ;
    int c=1, d=1 ;
    for(int i=0; i<3; i++){
        c += 2 ;
        d += 2 ;
        cout << a << " " << b << endl ;
        cout << c << " " << 1 << endl ;
        cout << 1 << " " << d << endl ;
        cout << a++ << " " << b++ << endl ;
    }
    a=5, b=5 ;
    c=0, d=0 ;
    for(int i=0; i<3; i++){
        c += 2 ;
        d += 2 ;
        cout << a << " " << b << endl ;
        cout << c << " " << 8 << endl ;
        cout << 8 << " " << d << endl ;
        cout << a++ << " " << b++ << endl ;
    }
    cout << 8 << " " << 8 << endl ;
}

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){
        vector< pair<int,int> > vec ;
        int r, c ;
        cin >> r >> c ;
        int r1=0, c1=0 ;
        int sum=0;
        int cnt=0;
        if(r == 1 && c == 1 ){
            // function
            cnt += 25 ;
            cout << cnt << endl ;
            fun(vec,cnt);
        }
        else if(r == c){
            cnt++;
            cnt += 25 ;
            cout << cnt << endl ;
            vec.push_back(make_pair(1,1));
            cout << 1 << " " << 1 << endl ;
            fun(vec,cnt);
        }
        else{
            sum = (r+c)/2 ;
            cnt++;
            cnt++;
            cnt += 25 ;
            cout << cnt << endl ;
            cout << sum << " " << sum << endl ;
            vec.push_back(make_pair(sum,sum));
            cout << 1 << " " << 1 << endl ;
            vec.push_back(make_pair(1,1));
            fun(vec,cnt);
            // function
        }

    }
}