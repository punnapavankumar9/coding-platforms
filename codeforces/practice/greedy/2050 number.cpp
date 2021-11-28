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
        ll n;
        cin >> n;
        if(n%2050){
            cout << "-1\n";
            continue;
        }
        ll res = 0;
        n /= 2050;
        while(n > 0){
            res+= (n%10);
            n /= 10;
        }
        cout << res << "\n";

    }
    
    return 0;
}