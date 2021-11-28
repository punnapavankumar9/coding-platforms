#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int k = 0;
    cin >> k;
    for(int i = 0; i < n-k +1; i++){
        cout << *max_element(arr+i, arr+k+i) << " ";
    }
    cout << "\n";
    
    return 0;
}