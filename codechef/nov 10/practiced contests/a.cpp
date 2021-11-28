#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

bool isPrime(ll n){
    for(ll i = 2;i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(isPrime(n)){
            cout << "yes" <<"\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}