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
        vector<int > arr(n);
        ll mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >>arr[i];
            if(mx < arr[i]) mx = arr[i];
        }
        ll ans = 0;
        for(int i = 0; i<n; i++){
            ans  = (ans | (arr[i] ^ mx));
        }
        cout << mx << " " << ans << "\n";
    }
    
    return 0;
}