#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    uint64_t D, d,P,Q;
    while(T--){
        cin >> D >> d >> P >> Q;
        int n = D/d;
        int rem = D % d;
        uint64_t sum = (D*P) +( Q * n * (n-1)/2) + rem * (n * Q);
        cout << sum << "\n";
    }
    
    return 0;
}