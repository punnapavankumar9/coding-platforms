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
        ll n;cin >> n;
        ll temp = n;
        
        ll count = 0;
        ll start = 1;
        if(n == 1){
            cout << 1 << "\n";
            continue;
        }
        while(n > 0){
            count++;
            n -= start;
            start+=2;
        }
        cout << count <<  "\n";

    }
    
    return 0;
}