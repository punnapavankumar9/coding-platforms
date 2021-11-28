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
        ll n , m;
        cin >> n >>  m;
        vector<int> arr(n, 0);
        for(int i = 0; i < n; i++) cin >> arr[i];
        ll bots = 0, pl = 0;
        int i = 0, j = 0;
        ll t1 = 0 , t2 = 0;

        for(int i = 0, j = 0; i < n && j < n; j++){
            t1 += arr[j];
            t2++;
            while (t1 > m)
            {
                t1 -= arr[i];
                i++;
                t2--;
            }
            if(pl <= t2){
                if(pl == t2) bots = min(bots, t1);
                else bots = t1;
                
                pl = t2;
            }
        }
        cout << bots << " " << pl << "\n";
    }
    
    return 0;
}