#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
const int mx = 1e5+2;
using namespace std;
vector<int> arr[mx];

vector<bool> vis(mx , 0);


void dfs(int node){
    vis[node] = true;
    for(int ch : arr[node]){
        if(!vis[ch]) dfs(ch);
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m ; i++){
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    }
    if(cnt == 1 && n == m+1){
        cout << "YES" << "\n";
    }else{
        cout << "NO\n";
    }
    
    return 0;
}