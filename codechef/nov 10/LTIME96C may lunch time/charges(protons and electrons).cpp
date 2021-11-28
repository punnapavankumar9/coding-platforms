#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll len = n-1;
        for(int i=1;i<n;i++) len+=s[i]==s[i-1]?1:0;
        int index = 0;
        while(k--){
            cin >> index;
            index--;
            if(s[index] == '0') s[index] = '1';
            else s[index] = '0';
            if(index < n-1){
                if(s[index] == s[index + 1]) len++;
                else len--;
            }
            if(index > 0){
                if(s[index] == s[index - 1]) len++;
                else len--;
            }
            cout << len << nl;
        }
    }
    
    return 0;
}