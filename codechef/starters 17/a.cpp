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
        int a, b,p,q;
        cin >> a >> b >> p >> q;
        if(a == p && b == q){
            cout << "0\n";
        }else if((a + b) % 2 == (p + q) % 2){
            cout << "2\n";
        }else{
            cout << "1\n";
        }
    }
    
    return 0;
}