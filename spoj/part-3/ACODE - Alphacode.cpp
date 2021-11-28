#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
ll dp[5010];

int solve(string &s, int st, int n){
    if(st == n) return 1;
    if(s[st] == '0') return 0;
    ll &res = dp[st];
    if(res != -1) return res;
    res = solve(s, st + 1, n);
    
    if(st + 1 < n){
        if(s[st] == '1') res += solve(s, st + 2, n);
        if(s[st] == '2' && s[st + 1] <= '6') res += solve(s, st + 2, n);
    }
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    while(true){
        string s;
        cin >> s;
        if(s == "0") break;
        memset(dp, -1, sizeof(dp));
        cout << solve(s, 0, s.size()) << "\n";
    }
    
    return 0;
}