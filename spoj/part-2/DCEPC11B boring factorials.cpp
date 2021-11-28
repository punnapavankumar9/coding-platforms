#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ll binpow(ll a, ll b, ll p){
    ll res = 1;
    while(b){
        if(b & 1) res = (res * a) % p;
        a = (a * a) %p;
        b >>= 1;
    }
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, p;
        cin >> n  >> p;
        if(n >= p){
            cout << 0 << "\n";
            continue;
        }
        ll res = p - 1;
        for(ll i = n+1; i < p; i++){
            res = (res * (binpow(i, p-2, p))) % p;
        }
        cout << res << "\n";
    }
    
    return 0;
}