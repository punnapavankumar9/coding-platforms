#include <iostream>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool checkTag(string& s, int n){
    if(s[0] != '<' || s[1] != '/'|| s[s.length()-1] != '>'){
        return 0;
    }
    for(int i = 2; i < s.length()-1; i++){
        if((48 <= s[i] && s[i] <= 57) || (97 <= s[i] && s[i] <= 122)){
            continue;
        }else{
            return 0;
        }
    }
    return 1;
    
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.length() <= 3){
            cout << "Error" << endl;
            continue;
        }
        checkTag(s, s.length()) ? (cout << "Success" << endl) : (cout << "Error" << endl);
    }
    
    return 0;
}