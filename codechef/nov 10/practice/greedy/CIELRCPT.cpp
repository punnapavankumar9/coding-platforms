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
        int n;cin >> n;
        int pre_ans = 0;
        if(n > 2048){
            pre_ans = n/2048;
            n %= 2048;
        }
        int cnt = 0;
        while (n> 0)
        {
            if(n & 1) cnt++;
            n /= 2;
        }
        cout << pre_ans + cnt << "\n";
    }
    
    return 0;
}