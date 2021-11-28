#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
const int N = 1e5+5;
typedef long long ll;
#define int long long
typedef unsigned long long ull;
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<ll> res(N, 0);
        for(int i = 0; i < n; i++){
            res[arr[i]]++;
        }
        ll ans = 0;
        for(int i = 2; i < N; i++){
            if(res[i] > (i-1)){
                ans += (i-1);
            }else{
                ans += res[i];
            }
        }
        cout << ans << "\n";

    }
    
    return 0;
}