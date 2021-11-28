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
        ll n;
        cin >> n;
        vector<int> arr(n);
        ll mx = INT_MIN;
        long double sm = 0;
        for(int i =0; i < n; i++){
            cin >> arr[i];
            if(mx < arr[i]) mx = arr[i];
            sm += arr[i];
        }
        sm -= mx;
        cout << fixed  << setprecision(8) << mx + (sm/(n-1)) << "\n";
    }
    
    return 0;
}