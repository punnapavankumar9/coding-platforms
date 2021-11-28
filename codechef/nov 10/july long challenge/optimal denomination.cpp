#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

vector<ll> mxGcd(vector<ll> &arr){
    ll n = arr.size();
    vector<ll> pre(n);
    vector<ll> suf(n);
    pre[0] = arr[0];
    suf[n-1] = arr[n-1];
    for(ll i = 1; i < n; i++){
        pre[i] = __gcd(pre[i-1], arr[i]);
    }
    for(ll i = n-2; i >=0; i--){
        suf[i] = __gcd(suf[i+1], arr[i]);
    }
    ll ans = suf[1];
    ll idx = 0;
    for(ll i = 1; i < n-1; i++){
        ll temp_gcd = __gcd(pre[i-1], suf[i+1]);
        if(ans <= temp_gcd){
            ans = temp_gcd;
            idx = i;
        }
    }
    if(ans <= pre[n-2]){
        ans = pre[n-2];
        idx = n-1;
    }
    return {ans, idx};

}
signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >>n;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        vector<ll> g = mxGcd(arr);
        ll ans = 0;
        ll m_gcd = g[0];
        if(m_gcd == 1){
            arr[n-1] = 1;
        }else{
            arr[g[1]] = m_gcd;
        }
        for(ll i = 0; i < n ; i++){
            ans += arr[i]/m_gcd;
        }
        cout << ans << endl;
    }
    return 0;
}