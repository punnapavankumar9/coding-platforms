#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    string p = "party";
    while(t--){
        string s;
        cin >> s;
        if(s.size() < 5){
            cout << s << nl;
            continue;
        }
        for(int i = 0 ; i < s.length()-4; i++){
            if(s.substr(i, 5) == p){
                s[i+2] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i'; 
            }
        }
        cout << s << nl;
    }
    
    return 0;
}