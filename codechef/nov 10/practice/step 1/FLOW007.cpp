#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        int res = 0;
        cin >> n;
        while(n){
            res = res * 10 + n %10;
            n  /= 10;
        }
        cout << res << nl;
    }
    
    return 0;
}