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
        string a,b;
        cin >> a >> b;
        bool flag = true;
        int cnt = 0;
        for(int i = n-1; i >= 0;i--){
            if((a[i] < b[i] && flag) || (a[i] <= b[i] && !flag)){
                cnt++;
            }
            if(a[i] != b[i]) flag = false;
            if(!flag && a[i] > b[i]) flag = !flag;
            
        }
        cout << cnt << "\n";
    }
    
    return 0;
}