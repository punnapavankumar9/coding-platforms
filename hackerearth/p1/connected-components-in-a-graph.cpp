#include <iostream>
#include<bits\stdc++.h>
using namespace std;
const int mx = 1e5+1;
vector<int> arr[mx];
vector<int> vis(mx, 0);

void dfs(int node){
    vis[node] = 1;
    for(int ch : arr[node]){
        if(!vis[ch]) dfs(ch);
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    int a,b;

    for(int i = 0; i < m ; i++){
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]) dfs(i), cnt++;
    }
    cout << cnt << "\n";
   
    return 0;
}