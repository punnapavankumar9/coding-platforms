#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ll sol(ll n){
    if(n == 0) return 1;
    ll res = 1;
    while(n > 0){
        res *= 10;
        n/=10;
    }
    return res/10;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n < 0){
            ll temp = n;
            ll res = 1;
            while(n != 0){
                res *= 10;
                n /= 10;
            }
            res /= 10;
            cout << (2 * abs(temp)) + res << "\n";
        }else if(n == 0){
            cout << "1\n";
        }else{
            ll res= 1;
            while(n > 0){
                res *=10;
                n /= 10;
            }
            res /= 10;
            cout << res << "\n";
        }
    }
    
    return 0;
}