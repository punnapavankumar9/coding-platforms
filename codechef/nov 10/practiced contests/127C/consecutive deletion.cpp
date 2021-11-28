#include <iostream>
#include <cstring>
#define nl "\n"
typedef long long ll;
#define int long long
using namespace std;
const ll s = 2e5+45;
ll arr[s];
ll pf[s];

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    memset(arr,0, sizeof arr);
    memset(pf, 0, sizeof pf);
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        for(ll i = 1; i <= n; i++){
            cin >> arr[i];
            pf[i] = pf[i-1] + arr[i];
        }


        ll m = n, s = pf[n];
        for(ll i = k; i <= n; i++){
            m = min(m, pf[i]-pf[i-k]);
        }

        cout << (m*(m+1))/2 + (s-m) << nl;


    }
    
    return 0;
}