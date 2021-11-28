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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int mx1 = INT_MIN;
        for(int i =0;i < n; i++){
            cin >> arr[i];
            if(arr[i] > mx1) mx1 = arr[i];
        }
        int mx2 = INT_MIN;
        for(int i =0;i < n; i++){
            if(arr[i] > mx2 && arr[i] != mx1){
                mx2 = arr[i];
            }
        }
        bool flag = true;
        int cnt = (k/(mx1 + mx2)) * 2;
        if((mx1 + mx2) * cnt < k) cnt++;


        cout << cnt << "\n";
    }
    
    return 0;
}