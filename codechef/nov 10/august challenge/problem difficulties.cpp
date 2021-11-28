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
        vector<int> arr(11, 0);
        for(int i = 0 ;i < 4; i++){
            int x;cin >> x;
            arr[x]++;
        }
        int diff = 0;
        int same = 0;
        for(int i = 0;i < 11; i++){
            if(arr[i]) diff++;
            same = max(same, arr[i]);
        }
        if(diff == 1){
            cout << "0\n";
        }else if(diff == 2){
            if(same == 2){
                cout << "2\n";
            }else{
                cout << "1\n";
            }
        }else{
            cout << "2\n";
        }

    }
    
    return 0;
}