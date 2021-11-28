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
        if(a == b || a == b + 2){
            if(a % 2 == 0) cout << a + b << "\n";
            else cout << (a + b - 1) << "\n";
        }else{
            cout << "No Number\n";
        }
    }
    
    return 0;
}