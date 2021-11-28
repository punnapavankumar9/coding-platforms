#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int q, p;
        cin >> q >> p;
        double res = p * q;
        if(q > 1000){
            cout << fixed << setprecision(6) << res - res*0.1  << "\n" ;
        }else{
            cout << fixed << setprecision(6) << res << "\n";
        } 
    }
    
    return 0;
}