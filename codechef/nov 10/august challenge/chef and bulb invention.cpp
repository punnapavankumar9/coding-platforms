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
        int n, p, k;cin >> n >> p >> k;

        int res = 0;
        int extra = n % k;
        int req = p % k;
        
        res += (req) * (int)(n/k);
        if(req > extra){
            res += extra;
        }else{
            res += req;
        }
        res += (p/k);
        cout << res + 1 << "\n";
    }
    
    return 0;
}