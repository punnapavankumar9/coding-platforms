#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n , x,t;
        cin >> n >> x >>t;
        ll k = min(n-1, t/x);
        if(k == 0){
            cout << 0 << nl;
            continue;
        }
        ll sm = max(0LL, k*(k-1)/2) + k*(n-k);
        cout <<sm << nl;
    }
    
    return 0;
}