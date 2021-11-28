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
        if(n == 1){
            cout << 0 << "\n";
            continue;
        }
        int cnt1 = 0, cnt2 = 0;
        if(s[0] == 'B') cnt1++;
        if(s[0] == 'W') cnt2++;
        for(int i = 1; i < n; i++){
            if(s[i-1] != s[i]){
                if(s[i] == 'W'){
                    cnt2++;
                }else{
                    cnt1++;
                }
            }
        }
        if(cnt1 == 0|| cnt2 == 0) {
            cout << "0\n";
            continue;
        }
        cout << min(cnt1, cnt2) << "\n";
    }
    
    return 0;
}