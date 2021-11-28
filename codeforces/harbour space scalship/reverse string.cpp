#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool solve(string& a, string& b){
    int n1 = a.length(), n2 = b.length();
    if(n2 > 2 * n1) return false;
    for(int i = 0; i < n1; i++){
        int j = 0;
        if(a[i] == b[j]){
            for(; j < n2 && i < n1 ; i++, j++){
                if(a[i] != b[j]){
                    for(int k = i -1; k >= 0 && j < n2; k--, j++){
                        if(a[k] != b[j]){
                            break;
                        }
                    }
                    if(j == n2) return true;
                }
            }
            if(j == n2) return true;
        }
    }
    return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        string s, t;
        cin >> s >> t;
        solve(s, t) ?( cout << "YES\n") : (cout << "NO\n");

        
    }
    
    return 0;
}