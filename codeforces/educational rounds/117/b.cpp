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
        int n,a,b;
        cin >> n >> a >> b;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            arr[i] = n-i;
        }
        int mn = n+1, mx = 0;
        for(int i = 0; i < n/2; i++){
            mn = min(arr[i], mn);
        }
        for(int i = n/2; i < n; i++){
            mx = max(arr[i], mx);
        }
        if(mx == b && mn == a){
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
            continue;
        }
        mn = mn+ 1;
        mx = 0;
        swap(arr[n-a], arr[n-b]);
        for(int i = 0; i < n/2; i++){
            mn = min(arr[i], mn);
        }
        for(int i = n/2; i < n; i++){
            mx = max(arr[i], mx);
        }
        if(mx == b && mn == a){
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
            continue;
        }
        cout << "-1\n";

    }
    
    return 0;
}