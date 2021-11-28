#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define int ll
typedef unsigned long long ull;
using namespace std;

int32_t main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for(auto &i : arr){
            cin >> i;
        }
        vector<int> dp(n, 0);
        deque<pair<int, int>> dq;
        if(n == k){
            cout << "0\n";
            continue;
        }

        for(int i = 0; i<= k ; i++){
            dp[i] = arr[i];
            while(!dq.empty() && dq.back().first > dp[i]){
                dq.pop_back();
            }
            dq.push_back({dp[i], i});
        }

        for(int i = k+1; i < n ;i++){
            if(!dq.empty() && dq.front().second < i-k-1) dq.pop_front();
            int pref_min = dq.front().first;
            dp[i] = arr[i] + pref_min;

            while(!dq.empty() && dq.back().first > dp[i]){
                dq.pop_back();
            }
            dq.push_back({dp[i], i});
        }

        int ans = INT32_MAX;
        for(int i = n-k-1; i  < n ;i++){
            ans = min(dp[i], ans);
        }
        cout << ans << "\n";
    }
    
    return 0;
}