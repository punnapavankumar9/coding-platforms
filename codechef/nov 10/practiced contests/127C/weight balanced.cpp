#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int w1,w2,x1,x2,m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        int diff = w2-w1;
        if(x1 * m <= diff && x2*m >= diff) cout << 1 << nl;
        else cout << 0 << nl;
    }
    
    return 0;
}