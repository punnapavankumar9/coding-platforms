#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        while(b % 2 == 0) {
            b /= 2;
        }
        while(b % 5 == 5){
            b /= 5;
        }
        if(b == 1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}