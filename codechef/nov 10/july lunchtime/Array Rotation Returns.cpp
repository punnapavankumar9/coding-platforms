#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define int long long

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n), b(n);
        auto input = [&](vector<int>& x){
            for(int i = 0 ;i < n; i++) cin >> x[i];
        };
        input(a);
        input(b);
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            mini = min(mini, (a[0] + b[i]) % n);
        }
        int x = -1, y = -1;
        for(int i = 0;i < n; i++){
            if((a[0] + b[i]) % n == mini){
                if(x == -1){
                    x = i;
                }else{
                    y = i;
                }
            }
        }
        auto get = [&](int i){
            int v = 0;
            vector<int> ans;
            for(int j = i; j < n; j++){
                ans.push_back((a[v++] + b[j])%n);
            }
            for(int j = 0 ; j < i; j++){
                ans.push_back((a[v++]+b[j]) % n);
            }
            return ans;
        };

        vector<int> l,r;
        r = get(x);
        if(y != -1){
            l = get(y);
            if(r > l) swap(r, l);
        }
        for(auto x: r){
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}