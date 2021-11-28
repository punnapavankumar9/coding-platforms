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
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for(int i = 0; i < n; i++) cin >> arr[i];
        ll res = 0;
        for(int i = 0; i < n; i++){
            int mx = arr[i];
            int mn = arr[i];
            set<int> s;
            for(int j = i; j < n; j++){
                s.insert(arr[j]);
                mx = max(mx, arr[j]);
                mn = min(mn, arr[j]);
                if(j-i <=1) continue;

                ll ans = 0;
                auto pos = s.lower_bound((mx + mn) / 2);

                if(pos != s.end()){
                    ans = max(ans, (ll)(mx - (*pos)) * (*pos -mn));
                }
                if(pos != s.begin()){
                    pos--;
                    ans = max(ans, (ll)(mx - *(pos)) * (*pos - mn));
                }
                res += ans;
            }
        }
        cout << res << "\n";
    }
    
    return 0;
}