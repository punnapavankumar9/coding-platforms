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
        for(int i = 0;i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end(), [&](int a, int b){
            return a < b;
        });
        for(int i = 0; i < k ; i++){
            if(arr[i] < 0)
                arr[i] *= -1;
        }
        sort(arr.begin(), arr.end(), [&](int a, int b){
            return a > b;
        });
        ll sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                sum += arr[i];
            }else{
                break;
            }
        }
        cout << sum << "\n";

    }
    
    return 0;
}