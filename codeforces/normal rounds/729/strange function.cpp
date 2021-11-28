#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
const int mod = 1e9+7;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int res;
        int twos = n/2;
        if(n & 1){
            twos++;
        }   
        res += twos * 2;
        res %= mod;
        vector<int> arr(n/2, 0);
        for(int i = 1; i < n/2 ;i++){
            for(int j = 3;j <= i+1; j++){
                if((i * 2) % j != 0){
                    arr[i-1] = j;
                    break;
                }
            }
        }
        for(int i : arr){
            res = (res + i) % mod;
        }
        cout << res << endl;
    }
    
    return 0;
}