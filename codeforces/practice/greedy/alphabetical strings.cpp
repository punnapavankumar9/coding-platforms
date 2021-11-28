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
    string str;
    while(t--){
        cin >> str;
        int start = 0; int end = str.size()-1;
        char ch = max(str[start], str[end]);
        bool flag = true;
        while(start <= end){
            if(str[start] == ch){
                start++;
                ch--;
            }else if(str[end] == ch){
                end--;
                ch--;
            }else{
                flag = false;
                break;
            }
        }
        if(flag && (str[start] == 'a' || str[end] == 'a')) cout << "Yes\n";
        else cout << "NO\n";
    }
    
    return 0;
}