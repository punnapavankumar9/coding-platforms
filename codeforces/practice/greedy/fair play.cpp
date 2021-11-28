#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        vector<int> s(4);
        for(int i = 0; i < 4; i++) cin >> s[i];
        int m = max(s[0], s[1]);
        int n = max(s[3], s[2]);
        if((m < s[2] && m < s[3]) || (n < s[1] && n < s[0])){
            cout << "No\n";
        }else cout << "yes\n";

    }
    
    return 0;
}