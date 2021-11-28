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
        int n;
        cin >> n;
        int res = 0;
        if(n % 10 == 9) res = n/10 + 1;
        else res = n/10;
        cout << res << "\n";

    }
    
    return 0;
}