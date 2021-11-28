#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int a, b , c;
        cin >> a >> b >>c;
        int gcd = __gcd(a, b);
        if(c % gcd) cout << "CASE " << i <<  ": No" << "\n";
        else cout << "CASE " << i <<  ": Yes" << "\n";
    }
    
    return 0;
}
