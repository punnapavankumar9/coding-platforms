#include <iostream>

using namespace std;

int main(){
    int t, x = 1;
    cin >> t;
    double eps = 1e-1;
    while(t--){
        int n;
        cin >> n;
        for(;;){
            double nx = (x + n/x)/2;
            if(abs(x-nx) < eps) break;
            x = nx;
        }
        cout << (int) x << "\n";
    }
    
    return 0;
}