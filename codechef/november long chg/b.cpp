#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll odds = 0;
        ll x;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x & 1) odds++;
        }
        if(odds == 0)
            cout << "0\n";
        else
            cout << (ll)odds/2 << "\n";

    }
    
    return 0;
}