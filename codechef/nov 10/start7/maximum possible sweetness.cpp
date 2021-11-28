#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

struct cmpr{
    bool operator()(const pair<ll ,ll >&a, const pair<ll, ll> &b) const{
        return a.second == b.second ? a.first < b.first:a.second > b.second;
    }
};

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, d; cin >> n >> d;
        vector<pair<ll, ll>> arr(n);
        for(ll i = 0;i < n;i ++){
            cin >> arr[i].first;
        }
        for(ll i = 0; i< n; i++){
            cin >> arr[i].second;
        }
        sort(arr.begin(), arr.end());

        multiset<pair<ll ,ll>, cmpr> ms;

        ll  l = 0;
        ll ans = 0;
        for(ll r = n-1; r >= 0; r--){
            while(l < r && arr[l].first + arr[r].first <= d) ms.insert(arr[l++]);
            auto it = ms.find(arr[r]);
            if(l > r && it != ms.end()) ms.erase(it);
            auto x = ms.empty() ? make_pair(0ll, 0ll) : *ms.begin();
            ll cost1 = x.first, sweet1 = x.second;
            ll cost2 = arr[r].first, sweet2 = arr[r].second;
            if(cost1 + cost2 <= d) ans = max(ans, sweet1+sweet2);
        }
        cout << ans << "\n";
    }


    
    return 0;
}