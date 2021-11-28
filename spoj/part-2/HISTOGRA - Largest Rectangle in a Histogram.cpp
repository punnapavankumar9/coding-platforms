#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll n;
    while(cin >> n && n != 0){
        vector<ll> arr(n+1);
        for(ll i =0 ; i < n; i++)cin >> arr[i];
        arr[n] = 0;
        ll i = 0;
        ll mx = 0;
        stack<ll>st;
        while(i < n+1){
            while(!st.empty() && arr[st.top()] > arr[i]){
                ll t = st.top();
                st.pop();
                ll h = arr[t];
                if(st.empty()){
                    mx = max(mx, h * i);
                }else{
                    ll len = i - st.top() - 1;
                    mx = max(mx, len * h);
                }
            }
            st.push(i);
            i++;
        }
        cout << mx << "\n";
    }
    
    return 0;
}