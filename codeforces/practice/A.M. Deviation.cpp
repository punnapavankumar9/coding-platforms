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
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        cout << (((n1 + n3 - 2 * n2) %3 == 0) ? 0 : 1) << "\n";
    }
    
    return 0;
}