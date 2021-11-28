#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool is_set(int n, int pos){
    return n & (1 << pos);
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> bit_at_ith(33, 0);
        vector<int> arr(n);
        for(int i = 0; i <n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n ;i++){
            int x = arr[i];
            for(int j = 0; j < 32;j++){
                if(is_set(x, j)){
                    bit_at_ith[j]++;
                }
            }
        }

        // for(int i = 0;i < 33; i++){
        //     cout << bit_at_ith[i] << " ";
        // }
        ll res  =0;
        for(int i = 0;i < 33; i++){
            res += ceil((double)bit_at_ith[i] / k);
        }
        cout << res << endl;
    }
    
    return 0;
}