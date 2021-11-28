#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
#define int long long int
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> arr(n);
        int mn =INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < mn){
                mn = arr[i];
            }
        }
        bool flag = false;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == mn){ 
                cnt++;
                continue;
            }
            if(arr[i] <= mn * 2){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << n << "\n";
        }else{
            cout << n-cnt << "\n";
        }
    }
    return 0;
}