#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ll etf(ll n){
    ll res = n;
    for(ll i = 2;i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0) n /= i;

            res -= res/i;
        }
    }
    if(n > 1){
        res -= res / n;
    }
    return res/2;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll n;
    while(scanf("%lld", &n) != EOF){
        cout << etf(n) << "\n";
    }
    
    return 0;
}