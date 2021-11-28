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
        ll n; cin >> n;
        if(n & 1){
            cout << 2 << " "<< n-1;
        }else{
            cout << 3 << " " << n-1;
        }
        cout << "\n";
    }
    
    return 0;
}