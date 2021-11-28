// incomplete

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
        string s;
        cin >> s;
        bool flag = false;
        for(int i = 0; i < n-1; i++){
            if(s[i] != s[i+1]){
                flag = !flag;
                if(i + 2 < n-1 && s[i+2] != s[i+1]){
                    flag = !flag;
                }
            }
        }
        if(flag) cout << "Alice\n";
        else cout << "Bob\n";
    }
    
    return 0;
}