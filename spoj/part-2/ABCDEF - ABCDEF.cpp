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
    ll  res = 0;
    cin >> n;
    vector<int> arr(n);
    vector<int> s1;
    vector<int> s2;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                s1.push_back( arr[i] * arr[j]+ arr[k]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(arr[k] == 0) continue;
                s2.push_back((arr[i] + arr[j]) * arr[k]);
            }
        }
    }
    sort(s1.begin(), s1.begin());
    sort(s2.begin(), s2.end());
    for(int i = 0; i < s1.size(); i++){
        int lo = lower_bound(s2.begin(), s2.end(), s1[i]) - s2.begin();
        int hi = upper_bound(s2.begin(), s2.end(), s1[i]) - s2.begin();
        res += (hi - lo);
    }
    cout << res << "\n";
    
    return 0;
}