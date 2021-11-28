#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int mx = 2002;
vector<int> arr[mx];
vector<bool> vis(mx , 0);
vector<bool> color(mx, 0);

bool dfs(int node, bool c){
    vis[node] = true;
    color[node] = c;
    for(int ch : arr[node]){
        if(!vis[ch]){
            if(!dfs(ch, c ^1)) return false;
        }else{
            if(color[node] == color[ch]){
                return false;
            }
        }
    }
    return true;
}


int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int T;
    cin >> T;
    for(int t = 1;t <= T; t++){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i <= n ; i++){
            arr[i].clear();
            vis[i] = false;
            color[i] = 0;
        }
        int a, b;
        for(int i = 0; i < m ;i++){
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        bool flag = true;
        for(int i = 1; i<= n; i++){
            if(!vis[i] && !dfs(i, 0)){
                flag = false;
            }
        }
        cout << "Scenario #" << t << ":\n";
        if(flag == false){
            cout << "Suspicious bugs found!\n";
        }else{
            cout << "No suspicious bugs found!\n";
        }
    }
    
    return 0;
}