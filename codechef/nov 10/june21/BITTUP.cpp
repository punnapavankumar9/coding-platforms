#include <iostream>

using namespace std;
#define ll long long int

const int MOD = 1e9+7;

ll sb(ll a, ll b){
    ll res = a - b;
    return res >= MOD ? res % MOD : res; 
}

ll modAr(ll a, ll b){
    a %= MOD;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        ll n , m;
        cin >> n >> m;
        cout <<  modAr(sb(modAr(2LL ,(ll)n), 1LL), m) << "\n";
    }
    return 0;
}