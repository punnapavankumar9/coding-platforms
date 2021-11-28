#include <iostream>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll sm = 0;
        ll j =0;
        for(int i = 0; i < n; i++){
            cin >> j;
            sm += j;
        }
        double mean = (double)sm/n;
        if(mean == 1){
            cout << 0 << "\n";
            continue;    
        }
        if(sm  < 0 || mean < 1){
            cout << 1 << "\n";
        }else{
            cout << sm-n << "\n";
        }
    }
    
    return 0;
}