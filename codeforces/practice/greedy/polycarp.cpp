#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        ll l = INT_MIN;
        ll r = INT_MAX;
        ll prevl = INT_MIN, prevr = INT_MAX;
        for(int i = 0; i < n;i++){
            cin >> a[i];
            if(a[i] > prevl){
                prevl = a[i];
                l = i;
            }
            if(a[i] < prevr){
                prevr = a[i];
                r = i;
            }
        }
        if(l > r){
            swap(l, r);
        }
        ll res = min(r+1, min(l+1+n-r, n-l));
        cout << res <<"\n";

    }
    
    return 0;
}