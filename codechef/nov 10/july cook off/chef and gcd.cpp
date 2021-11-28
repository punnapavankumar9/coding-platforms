#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll x, y;cin >> x >> y;
        ll gcd = __gcd(x, y);
        if(gcd >1){
            cout << "0\n" ;
        }else{
            if((__gcd(x+1, y) > 1) || (__gcd(x, y+1) > 1)){
                cout << "1\n";
            }else{
                cout << "2\n";
            }
        }
    }
    
    return 0;
}