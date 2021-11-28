#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int D, d, a, b ,c;
        cin >> D >> d >> a >> b >> c;
        ll sm =D * d;
        if( sm >= 42){
            cout << c << nl;
        }
        else if(sm >= 21 && sm < 42){
            cout << b << nl;
        }else if(sm >= 10 && sm < 21){
            cout<< a << nl;
        }else{
            cout << 0 << nl;
        }
    }
    
    return 0;
}