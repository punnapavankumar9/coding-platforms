#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if(n == 1){
            cout << 
        }
        sort(arr.begin(), arr.end());
        bool flag = false;
        for(int i = 1; i < n; i++){
            if(arr[i-1] = arr[i]) flag = true;
        }
        if(!flag){
            for(int i = n-1; i >= 0; i--) cout << arr[i] << " ";
            cout << "\n";
            continue;
        }

        unordered_map<int, int> mp;
        int mx = 0;
        int mx_e = INT_MIN;
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
            if(mx_e < arr[i]) mx_e = arr[i];
            if(mx < mp[arr[i]]) mx = mp[arr[i]];
        }
        if(mx > 2 || mp[mx_e] >= 2){
            cout << -1 << "\n";
            continue;
        }
        int mx_2 = INT_MIN;
        for(int i = 0;i < n; i++){
            if(mx_2 < arr[i] && arr[i] != mx_e){
                mx_2 = arr[i];
            }
        }
        vector<int> front;
        front.push_back
        for(auto x: mp){
            if(x.second == 2) front.push_back(x.first);
        }




    }
    
    return 0;
}