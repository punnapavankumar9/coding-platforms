#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
#define int ll
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        vector<pair<int, int>> arr(n);
        for(int i = 0; i < n; i++){
            int x; cin >>x;
            arr[i] = make_pair(x, i+1);
        }
        
    }
    
    return 0;
}