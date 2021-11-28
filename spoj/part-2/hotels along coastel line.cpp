#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll n , m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i = 0; i <n; i++) cin >> arr[i];
    
    ll i = 0;
    ll j = 0;
    ll sm = 0;
    ll mx = 0;
    int cnt = 0;
    while(i < n){
        sm += arr[i];
        while(sm > m){
            sm -= arr[j];
            j++;
        }
        mx = max(mx, sm);
        i++;
    }
    cout << mx << "\n";


    return 0;
}