#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

const int N= 1e6+10;

int arr[N];

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    memset(arr, 0, sizeof(arr));
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        arr[x]++;
    }
    vector<int> res;
    for(int i = 0; i < N; i++){
        x = arr[i];
        for(int j = 0 ; j <x ;j++){
            cout << i << "\n";
        }
    }

    return 0;
}