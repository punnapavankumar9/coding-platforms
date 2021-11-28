#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
//DSU solution
class dsu{
    private:
        vector<int> sz;
        vector<int> parent;
    public:
        dsu(int n){
            sz = vector<int>(n, 1);
            parent = vector<int>(n);
            for(int i = 0 ;i < n; i++){
                parent[i] = i;
            }
        }
        int find_set(int v){
            if(parent[v] == v) return v;
            return parent[v] = find_set(parent[v]);
        }
        void _union(int a, int b){
            a = find_set(a);
            b = find_set(b);
            if(a != b){
                if(sz[a] < sz[b]){
                    swap(a, b);
                }
                parent[b] = a;
                sz[a] += b;
            }
        }
};

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        dsu* res = new dsu(n);
        vector<int> sz(n);
        vector<int> parent(n);
        for(int i = 0; i < n ;i++){
            sz[i] = 1;
            parent[i] = i;
        }
        int a, b;
        for(int  i =0; i < k; i++){
            cin >> a >> b;
            res->_union(a, b);
        }
        set<int> s;
        for(int  i = 0;i < n ; i++){
            s.insert(res->find_set(i));
        }
        cout << s.size() << "\n";
    }
    
    return 0;
}



//dfs solution

// void dfs(vector<bool>& vis, vector<vector<int>>& graph, int source){
//     vis[source] = true;
//     for(int ch : graph[source]){
//         if(!vis[ch])
//             dfs(vis, graph, ch);
//     }
// }

// int main(){
//     cin.tie(0)->sync_with_stdio(false);cout.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         int a, b;
//         vector<vector<int>> graph(n);
//         for(int i = 0; i < k; i++){
//             cin >> a >> b;
//             graph[a].push_back(b);
//             graph[b].push_back(a);
//         }
//         int cnt = 0;
//         vector<bool> vis(n, false);
//         for(int i = 0 ;i < n ;i++){
//             if(!vis[i]){
//                 cnt++;
//                 if(graph[i].size())
//                     dfs(vis, graph, i);
//                 vis[i] = true;
//             }
//         }
//         cout << cnt << "\n";
//     }
//     return 0;
// }