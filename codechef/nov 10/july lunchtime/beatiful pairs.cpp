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
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<ll> suff(1e6+1, 0);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            suff[arr[i]]++;
        }
        int cnt = 0;
        int prev = 0;
        ll ans = 0;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++){
            if(arr[i] > prev){
                ans += ((ll)suff[arr[i]] * cnt * 2);
                cnt += suff[arr[i]];
                prev = arr[i];
            }
        }
        cout << ans << "\n";


    }
    
    return 0;
}