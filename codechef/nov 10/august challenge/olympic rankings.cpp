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
        int a, b, c,d,e,f;
        cin >> a >> b >> c >> d>> e>> f;
        ((a + b+ c) > (d+e+f)) ? cout << "1\n" : cout << "2\n";
    }
    
    return 0;
}