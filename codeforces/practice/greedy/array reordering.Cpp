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
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), [](int x,int y){
            return (x%2) < (y%2);
        });
        ll ans= 0;
        for(int i = 0;i < n;i++){
            for(int j = i + 1; j < n; j++){
                ans += __gcd(arr[i], arr[j]*2) > 1;
            }
        }
        cout << ans << "\n";

    }
    
    return 0;
}