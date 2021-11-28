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
        string s1,s2;
        cin >> s1 >> s2;

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        
        ll a = stoi(s1);
        ll b = stoi(s2);

        s1 = to_string(a + b);
        reverse(s1.begin(), s1.end());
        
        int cnt = 0;
        for(int i = 0;i < s1.length(); i++){
            if(s1[i] == '0') cnt++;
            else break;
        }
        for(int i = cnt ; i < s1.length(); i++){
            cout << s1[i];
        }
        cout << "\n";

    }
    
    return 0;
}