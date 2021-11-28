#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
typedef long long ll;
#define int long long
typedef unsigned long long ull;
using namespace std;
vector<int> mxGcd(vector<int>& arr){
    int n = arr.size();
    vector<int> pre(n+2);
    vector<int> suf(n+2);
    pre[0] = arr[0];
    suf[n-1] = arr[n-1];
    for(int i = 1; i < n; i++){
        pre[i] = __gcd(pre[i-1], arr[i]);
    }
    for(int i = n-2; i >=0; i--){
        suf[i] = __gcd(suf[i+1], arr[i]);
    }
    int ans = suf[1];
    int idx = 0;
    for(int i = 1; i < n-1; i++){
        int temp_gcd = __gcd(pre[i-1], suf[i+1]);
        if(ans <= temp_gcd){
            ans = temp_gcd;
            idx = i;
        }
    }
    if(ans <= pre[n-1]){
        ans = pre[n-1];
        idx = n-1;
    }
    return {ans, idx};
}

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >>arr[i];
        sort(arr.begin(), arr.end());
        vector<int> g = mxGcd(arr);
        int ans = 0;
        int m_gcd = g[0];
        if(m_gcd == 1){
            arr[n-1] = 1;
        }else{
            arr[g[1]] = m_gcd;
        }
        for(int i = 0; i < n ; i++){
            ans += arr[i]/m_gcd;
        }
        cout << ans << endl;
    }
    return 0;
}