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
        long double n, k, m;
        cin >> n >> k >> m;
        int res = -1;

        if(m < n){
            cout << 0 << "\n";
            continue;
        }
        while(n <= m){
            n *= k;
            res++;
        }
        cout << res << "\n";

    }
    
    return 0;
}