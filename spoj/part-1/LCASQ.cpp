#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+5, LOG = 14;

vector<int> children[N];
int up[N][LOG];
int depth[N];

void dfs(int a){
    for(int b : children[a]){   
        depth[b] = depth[a] + 1;
        up[b][0] = a;
        for(int i = 1; i < LOG; i++){
            up[b][i] = up[ up[b][i-1] ][i-1];
        }
        dfs(b);
    }
}

int get_lca(int a, int b){
    if(depth[a] < depth[b]) swap(a, b);
    int k = depth[a] - depth[b];

    for(int j = LOG-1; j >= 0; j--){
        if(k & (1 << j)){
            a = up[a][j];
        }
    }

    if(a == b){
        return a;
    }
    for(int j = LOG-1; j >= 0; j--){
        if(up[a][j] != up[b][j]){
            a = up[a][j];
            b = up[b][j];
        }
    }
    return up[a][0];
}

int main(){
    memset(up, 0 ,sizeof(up));
    memset(depth, 0 ,sizeof(depth));
    memset(children, 0 ,sizeof(children));
    cin.tie(0)->sync_with_stdio(0);cout.tie(0);
    int n;
    cin >> n;
    for(int v = 0; v < n; ++v){
        int cnt ; cin >> cnt;
        for(int i = 0; i < cnt; i++){
            int c; cin >> c;
            children[v].push_back(c);
        }
    }
    dfs(0);
    int q;cin >> q;
    while(q--){
        int u , v;
        cin >> u >> v;
        cout << get_lca(u, v) << "\n";
    }
    
    return 0;
}