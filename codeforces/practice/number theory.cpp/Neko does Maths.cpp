#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll diff = abs(a-b);
    ll gcd = __gcd(a, b);
    if(gcd == diff){
        cout << 0 << "\n";
    }else{
        cout << diff << "\n";
    }
    
    return 0;
}