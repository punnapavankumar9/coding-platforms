#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string g, e;
        cin >> e >> g;
        // if(n == g.size() && n == e.size()){
        //     if(n & 1){
        //         cout << n-1 << endl;
        //     }else{
        //         cout << n << endl;
        //     }
        //     continue;
        // }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(g[i] == '1' && e[i] == '0') ans++;
            else if((i > 0 && g[i] == '1' && e[i-1] == '1')){
                ans++;
                e[i-1] = 'k';
            }else if((i <n-1 && g[i] == '1' && e[i+1] == '1')){
                ans++;
                e[i+1] = 'k';
            }
        }
        cout << ans << "\n";



    }
    
    return 0;
}