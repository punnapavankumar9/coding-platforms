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
        int cnt = 1;
        for(int i = 0; i <n; i++){
            cin >> arr[i];
        }
        vector<int> b = arr;
        sort(arr.begin(), arr.end());

        for(int i = 0; i < n-1; i++){
            if(b[i] > b[i+1]){
                cnt++;
            }else{
                int x = upper_bound(arr.begin(), arr.end(), b[i]) - arr.begin();
                if(arr[x] != b[i+1]){
                    cnt++;
                }
            }
        }

        if(cnt > k){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}