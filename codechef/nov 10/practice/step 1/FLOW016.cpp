#include <iostream>
#include <algorithm>
#define ull uint64_t
using namespace std;

ull gcd(ull a, ull b){
    // return __gcd(a, b);
    if(b == 0) return a;
    if(a == 0) return b;
    if(a == b) return a;
    if(a > b) swap(a,b);
    while(b){
        a %= b;
        ull temp = a;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ull n, m;
        cin >> n  >> m;
        ull gcd_res = gcd(n , m);
        cout << (ull) gcd_res << " "<< ull (n / gcd(n , m) * m) << "\n"; 
    }
    
    return 0;
}