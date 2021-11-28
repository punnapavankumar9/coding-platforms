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
        cin >>n;
        vector<int> arr(2 * n, 0);
        for(int i =0 ;i < 2 * n; i++) cin >>arr[i];
        int count = 0;
        for(int i = 0;i <2* n ;i++){
            if(arr[i] & 1) count++;
        }
        if(count == n) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}