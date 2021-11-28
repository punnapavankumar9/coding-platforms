#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define int ll
typedef unsigned long long ull;
using namespace std;


int32_t main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> arr(n+1, 0);
        int x;
        for(int i = 1; i <= n; i++){
            cin >> x;
            if(x & 1){
                arr[i] = arr[i-1];
            }else{
                arr[i] = 1 + arr[i-1];
            }
        }
        int l, r;
        while(q--){
            cin >> l >> r;
            int even = arr[r] - arr[l-1];
            int odd = (r - l +1) - even;
            int even_comb = ((even * (even-1) * (even-2))/6);
            int odd_comb = ((odd * (odd-1)) / 2) * even;
            cout << even_comb + odd_comb << "\n";
        }
    }
    
    return 0;
}