// g++ long_cook.cpp -o long_cook && ./long_cook

/*
    Index     Day 
    0         Sunday 
    1         Monday 
    2         Tuesday 
    3         Wednesday 
    4         Thursday 
    5         Friday 
    6         Saturday
*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define ll long long int
using namespace std;
#define pll pair <ll , ll >
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)

int year_code(int year){
    year -= year%100;
    year = (year-1800+400)%400;
    year /= 100;
    if(year == 0) return 5;
    if(year == 1) return 3;
    if(year == 2) return 2;
    return 0;
}

int doom_day(int year) 
{ 
    int a = (year%100)/12;
    int b = (year%100)%12;
    int c = b/4;
    int d = year_code(year);
    int e = (a+b+c+d)%7;
    return e;
}
int dayofweek(int d, int m, int y)  
{  
    static int t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    if(m<3) y-=1 ;    
    return ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7;  
} 

int main(){
    fastio;
    w(t){
        ll m1, y1, m2, y2;
        cin >> m1 >> y1 >> m2 >> y2;
        if(m1 > 2) y1++;
        if(m2 < 2) y2--;
        ll ans = 0;
        // deb2(y1, y2);
        if(0){
            for(ll i = y1; i <= y2; i++){
                if(i%400 == 0 or (i%4 == 0 and i % 100 != 0)){
                    if(doom_day(i) == 6) {
                        ans++;
                    }
                }
                else{
                    if(doom_day(i) == 5 or doom_day(i) == 6){
                        ans++;
                    } 
                }
            }
        } 
        else{
            ll total_years = y2-y1+1 ;
            ans = (total_years/400)*101 ;
            y1 = y1 + ((y2-y1+1)/400)*400 ;
            // deb(y1);
            for(ll i = y1; i <= y2; i++){  
                if(i%400 == 0 or (i%4 == 0 and i % 100 != 0)){
                    if(dayofweek(1,2,i) == 6) {
                        ans++;
                    }
                }
                else{
                    if(dayofweek(1,2,i) == 0 or dayofweek(1,2,i) == 6){
                        // cout << "case 2 " << i << " doom day " << doom_day(i)<< endl;
                        ans++;
                    } 
                }
            }
        }
        cout << ans << endl;
    }
}