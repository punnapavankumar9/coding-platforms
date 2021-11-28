#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ll solve(ll n, unordered_map<ll, ll>& mp){
    if(n == 0) return 0;
    if(mp[n] != 0){
        return mp[n];
    }
    return mp[n] = max(n ,solve(n/2, mp) + solve(n/3, mp) + solve(n/4, mp));
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll n;
    while(cin >> n){
        unordered_map<ll  ,ll> mp;
        mp[0] = 0;
        mp[1] = 1;
        mp[2] = 2;
        cout << solve(n, mp) << "\n";
    }
    
    return 0;
}