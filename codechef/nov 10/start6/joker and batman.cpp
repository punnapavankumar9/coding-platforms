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
        int n , m ,l;
        cin >> n >> m >> l;
        vector<int> arr(n+1, 0);
        int x = 0;
        for(int i = 0; i < m;i++){
            int k;cin >> k;
            x++;
            int v;
            for(int j = 0; j < k; j++){
                cin >> v;
                arr[v] = i + 1;
            }
        }
        int pid = 0, ans = 0;
        for(int i = 0; i < l ;i++){
            int s;
            cin >> s;
            int cid = arr[s];
            if(cid != pid) ans++;
            pid = cid;
        }
        cout << ans << "\n";
    }
    return 0;
}