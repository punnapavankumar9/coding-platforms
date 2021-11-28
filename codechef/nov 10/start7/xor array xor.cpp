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
        ull n, k;
        cin >> n >> k;
        if(k == 0 || n == 0){
            cout << "0\n";
            continue;
        }
        cout << (ull) (((1 << n)-1) * 2 * (k % ((1<<n)/2))) << "\n";
    }
    return 0;
}