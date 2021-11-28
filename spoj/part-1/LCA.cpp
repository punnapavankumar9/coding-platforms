#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1005, LOG = 11;

vector<int> children[N];
int up[N];
int depth[N];

int get_lca(int a, int b){
    if(depth[a] < depth[b]) swap(a, b);
    int k = depth[a] - depth[b];

    while(depth[a] > depth[b]) a = up[a];

    while(a != b){
        a = up[a];
        b = up[b];
    }
    return a;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);cout.tie(0);
    memset(up, 0 ,sizeof(up));
    memset(depth, 0 ,sizeof(depth));
    memset(children, 0 ,sizeof(children));
    int t ;
    cin >> t;
    for(int l = 1; l <= t; l++){
        int n;
        cin >> n;
        for(int v = 1; v <= n; ++v){
            int cnt ; cin >> cnt;
            for(int i = 0; i < cnt; i++){
                int c; cin >> c;
                depth[c] = depth[v] + 1;
                up[c] = v;
            }
        }
        int q;cin >> q;
        cout << "Case " << l << ":\n";
        int u , v;
        while(q--){
            cin >> u >> v;
            cout << get_lca(u, v) << "\n";
        }
    }
    return 0;
}