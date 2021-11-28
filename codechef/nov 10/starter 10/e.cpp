#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
#define int long long
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll>a(n), b(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
        }
        vector<bool> used(n, 0);
        int ans = 0;
        int temp_ans  = 0;
        for(int i = 31; i >= 0;i--){
            vector<int> lastRound;
            bool possible = true;
            for(int j = 0;j < n; j++){
                if(!(a[j] & (1 << i))){
                    if((b[j] & (1 << i)) && !used[j] && (ans <= (ans & b[j]))){
                        used[j] = true;
                        swap(a[j], b[j]);
                        lastRound.push_back(j);
                    }else{
                        possible = false;
                        break;
                    }
                }
            }
            if(!possible){
                for(auto x: lastRound){
                    used[x] = false;
                    swap(a[x], b[x]);
                }
            }else{
                ans |= (1 << i);
                temp_ans = ans;
            }
        }
        int kk = 0;
        for(int i = 0; i < n; i++){
            if(used[i]){
                kk++;
            }
        }
        // int ans = a[0];
        // for(int i = 1; i < n; i++) ans &= a[i];
        cout << ans << " " << kk << "\n";

    }
    
    return 0;
}