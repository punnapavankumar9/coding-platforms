// incomplete

#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ld a, b;
        cin >> a >> b;
        if(a == b){
            cout << "0\n";
            continue;
        }
        ll mid = (a + b)/2;
        cout << ceil((b-mid)/2) + ceil((mid-a)/2) << "\n";
    }
    
    return 0;
}