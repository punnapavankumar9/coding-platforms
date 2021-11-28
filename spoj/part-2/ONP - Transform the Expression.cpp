#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int prec(char ch){
    if(ch == '^'){
        return 3;
    }else if(ch == '/' or ch == '*'){
        return 2;
    }else if(ch == '+' || ch == '-'){
        return 1;
    }
    return -1;
}

void solve(string s){
    string res ="";
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            res += s[i];
        }else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else if(s[i] == '('){
            st.push('(');
        }else{
            while (!st.empty() && prec(st.top()) > prec(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);            
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        solve(s);
    }
    
    return 0;
}