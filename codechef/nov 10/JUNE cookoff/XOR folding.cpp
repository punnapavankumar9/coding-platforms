#include <iostream>
#include <vector>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<bool> res(n);
        for(int i =0 ; i < n; i++){
            string s;
            cin >> s;
            bool k = s[0]-'0';
            for(int j = 1; j < m; j++){
                k ^= s[j]-'0';
            }
            res[i] = k;
        }
        bool x = res[0];
        for(int i = 1; i < n ; i++){
            x ^= res[i];
        }
        cout << (x ? "YES" : "NO") << nl;
    }
    
    return 0;
}