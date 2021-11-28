#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n , m , k;
        cin >> n >> m >> k;
        ll ans = 0;
        for(ll i = 1; i <= n ;i++){
            if(min(i , m) &1){
                ans ^= k + i +1;
            }
        }

        for(int j = 2; j <= m; j++){
            if(min(n , m-j+1) & 1){
                ans ^= k + n + j;
            }
        }
        cout << ans << nl;
    }
    
    return 0;
}