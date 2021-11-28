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
        int n;cin >> n;
        int mx = 0;
        while(n > 0){
            int rem = n % 10;
            if(mx < rem) mx = rem;
            n /= 10;
        }
        cout << mx << "\n";
    }
    
    return 0;
}