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
        if(n == 1) cout << "a\n";
        else cout << string(n/2, 'a') + (n&1 ? "bc":"b") + string(n/2 -1, 'a') << "\n";
    }
    return 0;
}