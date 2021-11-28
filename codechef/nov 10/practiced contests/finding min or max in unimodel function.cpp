#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define endl "\n"
typedef long long ll;
#define int double
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

double func(int x, int b, int c){
    return (double)((double)(x * x) + b * x + c)/sin(x);
}

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int b, c;
        cin >> b >> c;
        int l = 0,r = M_PI/2;
        int m1, m2, fm1,fm2;
        while(abs(r - l) > 1e-7){
            m1 = l + (r-l)/3;
            m2 = r - (r - l)/3;

            fm1 = func(m1, b,c);
            fm2 = func(m2, b,c);

            if(fm1 < fm2){
                r = m2; 
            }else if(fm1 > fm2){
                l = m1;
            }else{
                l = m1;
                r = m2;
            }
        }
        cout << setprecision(12) << func(l, b, c) << "\n" ;
    }
    
    return 0;
}