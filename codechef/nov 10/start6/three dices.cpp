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
        int x, y;
        cin >> x >> y;
        double ans = max(0, 6-(x+y));
        cout << fixed << setprecision(10) << (double)(ans/6) << "\n";
    }
    
    return 0;
}