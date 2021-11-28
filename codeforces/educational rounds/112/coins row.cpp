#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    auto input = [&](int a, vector<int> &b){
        for(int i = 0; i < a; i++){
            cin >> b[i];
        }
    };
    while(t--){
        int m ;
        cin >> m;
        vector<vector<int>> arr(2, vector<int>(m));
        for(int j = 0; j < 2; j++){
            for(int i = 0;i < m; i++){
                cin >> arr[j][i];
            }
        }
        
        ll s1 = 0, s2 = 0;
        ll ans = INT_MAX;
        for(int i = 0; i < m; i++) s1 += arr[0][i];

        for(int i= 0;i < m;i++){
            s1 -= arr[0][i];
            ans = min(ans, max(s1, s2));
            s2 += arr[1][i];
        }
        cout << ans << "\n";
    }
    
    return 0;
}