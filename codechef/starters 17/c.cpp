#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

bool comp(string &a, string &b){
    int cnt1 = 0;
    int cnt2 = 0;
    bool flag = true;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0') cnt1++;
        if(b[i] == '0') cnt2++;
        if(cnt1 > cnt2 && flag) flag = false;
    }
    if(cnt1 == cnt2){
        if(flag)
            return false;
        else true;
    }
    return cnt1 > cnt2 ? true : false;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<string> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        vector<bool> vis(n, 0);
        unordered_map<int, int> mp;
        sort(arr.begin(), arr.end(), comp);

        int cnt = 0;
        ll res = 0;
        for(int i = n-1; i >= 0; i--){
            for(int  j = m-1; j >= 0; j--){
                if(arr[i][j] == '0'){
                    cnt++;
                }else{
                    res += cnt;
                }
            }
        }
        cout << res << "\n";

    }
    
    return 0;
}