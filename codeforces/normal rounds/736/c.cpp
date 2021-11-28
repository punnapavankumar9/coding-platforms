#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int mx = 200050;
int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n, m; cin >> n >> m;
    vector<int> arr(mx, 0);
    int u , v;
    int ans = 0;
    for(int i = 1; i <= m; i++){
        int u, v; cin >>  u >> v;
        if(u > v) swap(u,v);
        arr[u]++;
        if(arr[u] == 1) ans++;
    }
    int q;
    cin >> q;
    int c = 0;
    while(q--){
        cin >> c;
        if(c == 1){
            int u, v; cin >>  u >> v;
            if(u > v) swap(u, v);
            arr[u]++;
            if(arr[u] == 1) ans++;
        }else if(c == 2){
            int u, v; cin >>  u >> v;
            if(u > v) swap(u, v);
            arr[u]--;
            if(arr[u] == 0) ans--;
        }else{
            cout << n-ans << "\n";
        }

    }
    
    return 0;
}