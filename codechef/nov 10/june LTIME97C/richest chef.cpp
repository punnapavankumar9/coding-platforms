#include <iostream>
#define endl "\n"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, x;
        cin >> a >> b >> x;
        int req = b-a;
        if(req == 0){
            cout << 0 << endl;
        }else{
            cout << int(req/x) << endl;
        }

    }   
    
    return 0;
}