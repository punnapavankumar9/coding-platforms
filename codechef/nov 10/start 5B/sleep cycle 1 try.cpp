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
        int l, h;
        cin >> l >> h;
        string s;
        cin >> s;
        vector<int> res;
        int curCount = 1;
        int sm = (s[0]-'0') ? 0 : 1;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                sm++;
                count++;
            }else if(count > 0){
                res.push_back(count);
                count = 0;
            }
        }
        if(s[l-1] == '0'){
            res.push_back(count);
        }
        vector<vector<int >> dp(res.size(), vector<int>(h , -1));
        if(sm < h){
            cout << "No" << endl;
        }else{
            for(int i =0;i < res.size(); i++){
                int ans = ()
            }
        }
    }
    return 0;
}