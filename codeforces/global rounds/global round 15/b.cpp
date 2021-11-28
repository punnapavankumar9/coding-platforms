#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool cmp(vector<int>&a, vector<int>&b){
    int cnt = 0;
    for(int i = 0; i< 5; i++){
        if(a[i] < b[i]) cnt++;
    }
    if(cnt >= 3) return true;
    return false;
}

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin>> n;
        vector<vector<int>> arr(n, vector<int>(5,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                int x;
                cin >> x;
                arr[i][j] = x;
            }
        }
        int cur = 0;
        for(int i = 1; i <n ;i++){
            if(cmp(arr[i], arr[cur])) cur = i;
        }
        for(int i = 0;i < n; i++){
            if(i != cur && cmp(arr[i], arr[cur])){
                cur = -2;
                break;
            }
        }
        cout << cur+1 << "\n";
    }
    
    return 0;
}