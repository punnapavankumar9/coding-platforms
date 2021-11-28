#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    int res = 0;
    while(t--){
        for(int i = 1; i <= 1000 ;i++){
            cout << i * i << nl;
            cout << flush;
            cin >> res;
            if(res == 0){
                continue;
            }else if(res == 1){
                break;
            }
        }

    }
    
    return 0;
}