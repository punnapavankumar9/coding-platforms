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
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for(int i = 0; i< s.length(); i++){
            mp[s[i]]++;
        }
        int count = 0;
        for(auto x: mp){
            if(x.second > 2){
                count += (x.second-2);
            }
        }
        cout << (s.length() - count)/2 << "\n";

    }
    
    return 0;
}