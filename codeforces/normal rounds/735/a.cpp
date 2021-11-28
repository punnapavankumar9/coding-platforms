#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        ll ans = INT_MIN;
        ll pre = 0;
        for(int i = 0; i<n-1; i++){
            pre =  ll (arr[i] * arr[i+1]);
            if(ans < pre){
                ans = pre;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}