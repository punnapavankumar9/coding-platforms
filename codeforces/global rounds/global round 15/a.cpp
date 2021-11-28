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
        vector<char> arr(n);
        for(int i =0; i< n; i++){
            cin >>arr[i];
        }
        vector<char> arr2 = arr;
        ll count = 0;
        sort(arr.begin(), arr.end());
        for(int i = 0; i <n; i++){
            if(arr[i] != arr2[i]){
                count++;
            }
        }
        cout << count << "\n";


    }
    
    return 0;
}