#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool isPossible(int req, int cnt, vector<ll>& arr){
    int n = arr.size();
    int count = 1;
    int prev = arr[0];
    for(int i = 1;i < n; i++){
        if(arr[i]-prev >= req){
            if(++count == cnt) return true;
            prev = arr[i];
        }
    }
    if(count == cnt) return true;
    else return false;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<ll> arr(n);
        for(int i = 0; i <n; i++) cin >> arr[i];
        sort(arr.begin(),arr.end());
        ll l = 1, r = arr[n-1];
        ll ans = 0;
        while(l <= r){
            ll mid = (l + r)/2;
            if(isPossible(mid, c, arr)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid -1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}