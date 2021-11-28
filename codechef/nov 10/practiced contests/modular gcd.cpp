#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ll prod(ll a, ll b, ll m= mod){
    ll res = 0;
    while(b){
        if(b & 1) res = (res + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
}

ll bpow(ll a, ll n, ll m =  mod){
    ll res = 1;
    while (n){
        if(n & 1) res = prod(res, a, m);
        a = prod(a, a, m);
        n >>= 1;
    }
    return res;
    
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll a,b,n;
        cin >> a >> b >> n;
        
        if(a == b){
            cout << (2 * (bpow(a, n))) << "\n";
        }else{
            ll diff = abs(a-b);

            ll d = (bpow(a, n, diff)%diff + bpow(b, n, diff)%diff)%diff;
            cout << __gcd(d, diff) << "\n";
        }
    }
    
    return 0;
}