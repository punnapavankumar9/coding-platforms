#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,K;
        cin >> a >> b >> c >> d >> K;
        int dist = abs(a-c) + abs(b - d);
        if(dist <= K){
            if((dist & 1) == (K & 1)) cout << "YES" << nl;
            else cout << "NO" << nl;
        }else{
            cout << "NO" << nl;
        }
    }
    
    return 0;
}