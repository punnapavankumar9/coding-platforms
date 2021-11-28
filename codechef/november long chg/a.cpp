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
        ll a , b;
        cin >> a >> b;
        ll money = a + (b * 2);
        if(money & 1){
            cout << "NO\n";
            continue; 
        }
        if(a == 0){
            if(b & 1){
                cout << "NO\n";
                continue;
            }
        }
        cout << "YES\n";
    }
    
    return 0;
}