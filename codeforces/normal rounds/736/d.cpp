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
        int n;cin >> n;
        vector<ll> arr(n);
        for(int i = 0;i < n; i++){
            cin >> arr[i];
        }
        vector<ll> res(n-1);
        for(int i = 0; i < n-1; i++){
            ll r1 = __gcd(arr[i], arr[i+1]);
            res[i] = r1;
        }
        int cnt = 0;
        int prev = -1;
        for(int i = 0; i< n-1; i++){
            if(res[i] > 1) cnt++;
            else{
                if(cnt > prev){
                    prev = cnt;
                    cnt = 0;
                }
            }
        }
        if(cnt > prev){
            prev = cnt;
        }
        cout << prev+1 << "\n";
    }
    
    return 0;
}