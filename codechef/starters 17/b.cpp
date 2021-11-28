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
        vector<int> b(n);
        int temp = 1;
        bool flag = true;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(i > 0 && b[i-1] % b[i]){
                flag = false;
            }
        }
        if(flag){
            for(int num : b) cout << num << " ";
            cout << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
    
    return 0;
}