#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n, queries;
    cin >> n >> queries;
    string s = "";
    cin >> s;
    // map<char, int> idx;
    // int kk = 1;
    // for(int i = 0; i <s.length(); i++){
    //     if(!idx[s[i]]){
    //         idx[s[i]] = kk++;
    //     }
    // }
    vector<int> res(s.length(), 0);
    res[0] = s[0]-'a'+1;
    for(int i = 1; i < s.length();i++){
        res[i] = res[i-1] + (s[i] - 'a' + 1);
    }
    for(int i = 0 ; i < queries ; i++){
        int x, y;
        cin >> x >> y;
        if(x == 1){
            cout << res[y-1] << nl;
        }else{
            cout << res[y-1] - res[x-2] << nl;
        }
    }

    return 0;
}