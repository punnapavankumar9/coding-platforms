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
        if(is_sorted(s.begin(), s.end())){
            cout << 0 << "\n";
            continue;
        }
        string t = s;
        sort(t.begin(), t.end());
        cout << 1 << "\n";
        vector<int> res ;
        for(int i =0 ; i < n; i++){
            if(s[i] != t[i]) res.push_back(i+1);
        }
        cout << res.size() << " ";
        for(int i = 0;i < res.size(); i++) cout << res[i] << " \n"[i+1 == res.size()];
    }
    
    return 0;
}