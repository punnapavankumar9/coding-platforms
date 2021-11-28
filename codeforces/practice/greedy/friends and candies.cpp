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
        vector<int> arr(n);
        for(int i =0 ;i < n; i++){
            cin >>arr[i];
        }
        auto sum = [](vector<int> & a){
            ll sm = 0;
            for(int i =0;i < a.size(); i++){
                sm+=a[i];
            }
            return sm;
        };
        ll sm = sum(arr);
        if(sm%n){
            cout << "-1\n";
            continue;
        }
        ll avg = sm/n;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > avg) cnt++;
        }
        cout << cnt << "\n";

    }
    
    return 0;
}