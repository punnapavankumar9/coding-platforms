#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<int> r, l;
        for(int i = 1; i <= n; i++){
            if(a[i] == 1){
                r.emplace_back(i);
            }else if(a[i] == 2){
                l.emplace_back(i);
            }
        }


        while(m--){
            int des = 0; cin >> des;
            if(des == 1){
                cout << "0\n";
                continue;
            }
            int des1 = INT_MAX, des2 = INT_MAX;

            auto it1 = lower_bound(l.begin(), l.end(), des);
            if(it1 != l.end()) des1 = (*it1)-des;

            auto it2 = lower_bound(r.begin(), r.end(), des);
            if(it2 != r.end() && (*it2) == des){
                des2 = 0;
            }else{
                if(it2 != r.begin()){
                    it2--;
                    des2 = des - (*it2);
                }
            }
            int ans = min(des1, des2);
            if(ans == INT_MAX){
                cout << "-1 ";
            }else{
                cout << ans << " ";
            }
        }
        cout << endl;
    }
    return 0;
}