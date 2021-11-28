#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n, m , k; cin >> n >> m >> k;
        string s;cin >> s;
        vector<vector<ll>> cost(10, vector<ll>(10, 1e12));
        ll x, y, z;
        for(ll i = 0;i <m; i++){
            cin >> x >> y >> z;
            cost[x][y] = z;
        }
        for(ll i = 0; i < 10; i++) cost[i][i] = 0;

        for(ll k = 0;k < 10; k++){
            for(ll i = 0; i < 10; i++){
                for(ll j = 0; j < 10; j++){
                    cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
                }
            }
        }
        vector<ll> suf(n / 2 + 1);
        for(ll i = n/2 - 1; i >= 0 ;i--){
            ll minn = 1e12, x = s[i]-'0', y = s[n-i-1]-'0';
            for(ll d = 0; d < 10; d++){
                minn = min(minn, cost[x][d]+cost[y][d]);
            }
            suf[i] = minn + suf[i+1];
        }
        if(suf[0] > k){
            cout << "-1\n";
            continue;
        }                       
        ll pref  = 0;
        string ans=  string(n, '.');
        for(ll i = 0 ;i < n/2; i++){
            ll x = s[i]-'0', y = s[n-i-1] - '0';
            for(ll d = 9; d >= 0; d--){
                if(cost[x][d] + cost[y][d] + suf[i+1] + pref <= k){
                    ans[i] = ans[n-i-1] = (char)(d+'0');
                    pref += cost[x][d] + cost[y][d];
                    break;
                }
            }
        }

        if(n & 1ll){
            ll x = s[n/2]-'0';
            for(ll d = 9;d >= 0 ; d--){
                if(cost[x][d] + pref <= k){
                    ans[n/2] = (char)(d+'0');
                    break;
                }
            }
        }
        cout << ans << "\n";

    }
    
    return 0;
}