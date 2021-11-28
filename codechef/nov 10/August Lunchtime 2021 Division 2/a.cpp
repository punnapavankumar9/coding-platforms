// incomplete
#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

// int pow(int a, int b){
//     ll res = 1;

//     while(b > 0){
//         if(b&1) res *= a;
//         b >>= 1;
//         a *= a;
//     }
//     return res;
// }

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int count = 0;
        int dist = 0;
        int mx = * max_element(a.begin(), a.end());
        bool first = true;
        for(int i = 0; i< n;i ++){
            dist++;
            if(mx == a[i] && (dist >= k || first)){
                count += dist-k-1;
                dist = 0;
                first = false;
            }
        }
        cout << count << "\n";


    }
    
    return 0;
}