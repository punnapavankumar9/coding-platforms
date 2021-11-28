// incomplete answer
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
        int n;
        int a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int cnt = 1;
        for(int i = 1; i <n; i++){
            if(s[i] != s[i-1]) cnt++;
        }
        ll ans = a * n;
        ans += max(b * n , (cnt/2 + 1) * b);
        cout << ans << "\n";
    }
    
    return 0;
}