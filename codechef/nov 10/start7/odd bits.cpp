// incomplete
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
        int count = 0;
        int sm = 1;
        count++;
        int i = 0;
        while(count <= n){
            count += (1<<i);
            i++;
        }
        count -= (1 << --i);
        cout << count << "\n";
    }
    
    return 0;
}