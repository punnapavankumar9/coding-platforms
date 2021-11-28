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
        int a, b;
        cin >> a >> b;
        int x = abs(a - 0) + abs(b-0);
        if(x & 1){
            cout << "-1 -1\n";
            continue;
        }
        if(a & 1){
            cout << a/2 + 1 << " " << b/2 << "\n";
            continue;
        }
        cout << a/2 << " " << b/2 << "\n"; 
    }
    
    return 0;
}