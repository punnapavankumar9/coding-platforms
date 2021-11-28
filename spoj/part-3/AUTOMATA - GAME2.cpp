#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

bool solve(string s, string l){
    unordered_set<size_t> st;
    st.insert(0);
    for(char ch : l){
        unordered_set<size_t> nst;
        for(auto i : st){
            if(i == s.size()) continue;
            if(s[i] == ch) nst.insert(i+1);
            else if(ch == '*'){
                for(size_t j = i; j <= s.size(); j++){
                    nst.insert(j);
                }
            }else if(ch == '?'){
                nst.insert(i+1);
                nst.insert(i);
            }
        }
        st = nst;
    }
    return st.find(s.size()) != st.end();
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s, l;
        cin >> l >> s;

        if(solve(s, l)) cout << "Yes\n";
        else cout << "No\n";
    }
    
    return 0;
}