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
        vector<int> arr;
        int prev = 0;
        int curr =0 ;
        for(int i = 0; i < n ;i++){
            cin >> curr;
            if(curr != prev) arr.push_back(curr);
            prev = curr;
        }
        int ug = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1] != arr[i]) ug++;
        }
        n = arr.size();
        vector<int> res(k + 1, ug);
        for(int i = 0; i < arr.size(); i++){
            if(i < n-1) res[arr[i]]--;
            if(i > 0) res[arr[i]]--;
            if(i > 0 && i < n-1 && arr[i+1] != arr[i-1]) res[arr[i]]++;
        }
        for(int i = 1;i < k+1; i++){
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}