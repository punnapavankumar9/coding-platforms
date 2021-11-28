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
        ll sm = 0;
        ll mn = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < mn) mn = arr[i];
        }
        int cnt = 0;
        for(int i = 0;i < n; i++){
            if(arr[i] == mn) cnt++;
        }
        
        cout << n-cnt << "\n";
    }
    
    return 0;
}