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
        cin>> n;
        if(n % 3 == 2){
            cout << n /3 << " " << (n/3 + 1) << "\n";
        }else if(n % 3 == 1){
            cout << n/3 + 1 << " " << n/3 << "\n";
        }else{
            cout << n/3 << " " << n/3 << "\n";
        }
    }
    
    return 0;
}