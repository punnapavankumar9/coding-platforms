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
        int mn = INT_MAX;
        int mx = INT_MIN;
        int x;
        for(int i = 0; i < n ;i++){
            cin >> x;
            if(x > mx) mx = x;
            if(x < mn) mn = x;
        }
        cout << abs(mx - mn) << "\n";
    }
    
    return 0;
}