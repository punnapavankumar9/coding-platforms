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
        int x = 0;
        ull sm = 0;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            sm += x;
            if(x % 3 == 1) cnt1++;
            else if(x % 3 == 2) cnt2++;
        }
        if(sm % 3 != 0 ){
            cout << "-1\n";
            continue;
        }
        if(cnt1 == cnt2) cout << cnt1 << "\n";
        else{
            cout << min(cnt1, cnt2) + 2 * abs(cnt1 - cnt2)/3 << "\n";
        }

    }
    
    return 0;
}