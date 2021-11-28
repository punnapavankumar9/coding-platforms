#include <iostream>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0]-'0' > 1){
            cout << 1 << s << endl;
        }else{
            cout << s[0] << 0 << s.substr(1) << endl;
        }
    }
    return 0;
}