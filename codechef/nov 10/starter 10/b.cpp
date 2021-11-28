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
        ull n, k, s;
        cin >> n >> k >> s;
        n *= n;
        ll diff = s-n;
        cout << ll(diff/(k-1)) << "\n";

    }
    
    return 0;
}