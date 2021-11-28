#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b , c, d;
        cin >> a >> b >> c >> d;
        int A = c/a;
        int B = d/b;
        cout << (int) A + B << "\n";
    }
    
    return 0;
}