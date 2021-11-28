#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define int ll

void dfs(vector<bool>& vis, vector<int>& arr, int source,  vector<int>& m){
    vis[source] = true;
    if(arr[source] != -1 && !vis[arr[source]]){
            m.push_back(arr[source]);
            dfs(vis, arr, arr[source], m);
    }
    vis[source] = false;
}

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<bool> vis(n , 0);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int c1, c2;
    cin >> c1 >> c2;
    vector<int> m1;
    vector<int> m2;
    if(!vis[c1] && arr[c1] != -1){
        m1.push_back(c1);
        dfs(vis, arr, c1, m1);
    }
    if(!vis[c2] && arr[c2] != -1){
        m2.push_back(c2);
        dfs(vis, arr, c2, m2);
    }
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    int i = 0; 
    int j = 0;
    while(i < m1.size() && j < m2.size()){
        if(mp2[m1[i]]){
            cout << m1[i];
            return 0;
        }else mp1[m1[i]]++;
        
        if(mp1[m2[j]]){
            cout << m2[j];
            return 0;
        }else mp2[m2[j]]++;
        i++;j++;
    }

    while(i < m1.size()){
        if(mp2[m1[i]]){
            cout << m1[i];
            return 0;
        }else mp1[m1[i]]++;
        i++;
    }  
    while(j < m2.size()){
        if(mp1[m2[j]]){
            cout << m2[j];
            return 0;
        }else mp2[m2[j]]++;
        j++;
    }
    cout << -1 << "\n";
    return 0;
}