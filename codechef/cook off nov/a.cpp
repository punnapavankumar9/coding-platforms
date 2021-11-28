#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
vector<int> arr;

void pre(){
    arr.push_back(1);
    for(int i = 1; i <= 2000;i++){
        arr.push_back(arr[i-1] + 2);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    pre();
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n ;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}