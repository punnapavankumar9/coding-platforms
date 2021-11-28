#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ll fact(ll n){
    return n * (n+1) / 2;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(n == k || n == k+1){
            cout << n-k << "\n";
            continue;
        }
        ll temp = n - k;
        ll t1 = temp % (k + 1);
        ll t2 = temp / (k+1);
        
        ull res = 0;
        res += (fact(t2 + 1) * t1);
        res += fact(t2) * (k + 1- t1);

        cout << res << "\n";

    }
    
    return 0;
}