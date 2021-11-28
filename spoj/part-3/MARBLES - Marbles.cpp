#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ull comb(ull n, ull k){
    ull res = 1;
    for(ll i = 0;i < k; i++){
        res = res *(n-i)/(i+1);
    }
    return res;
}


int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ull n, k;
        cin >> n >> k;

        if(n == k) {
            cout << 1 << "\n";
            continue;
        }
        n -= 1;
        k -= 1;
        k = min(k, n - k);
        cout << (ull)comb(n, k) << "\n";


    }
    
    return 0;
}