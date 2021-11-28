#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int mx = 1e5+5;
bool prime[mx];
void s_o_f(){
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2;i * i < mx;i++){
        if(prime[i]){
            for(int j = i * i; j < mx; j+=i){
                prime[j] = false;
            }
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    s_o_f();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v1, v2{1};
        int c1 = 0,c2 = 1;
        for(int i = 2;i <= n; i++){
            if(!prime[i]){
                v1.push_back(i);
                c1++;
                continue;
            }else{
                if(i * 2 <= n){
                    v1.push_back(i);
                    c1++;
                }else{
                    v2.push_back(i);
                    c2++;
                }
            }
        }
        if(k >= c1 || k <= c2){
            cout << "YES\n";
            if(k <= c2){
                for(int i = 0; i < k ;i++) cout << v2[i] << " ";
            }else{
                for(int num : v1) cout << num << " ";
                for(int i = 0; i < k - c1; i++) cout << v2[i] << " ";
            }
            cout << "\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}