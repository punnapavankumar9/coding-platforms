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
    vector<int> pq(101, 0);
    vector<bool> pr(101, false);
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i =0; i < n; i++){
            cin >> pq[i];
            pr[i] = 0;
        }
        int print = -1;
        int ans = 0;
        int pos = 0;
        while(!pr[m]){
            print = -1;
            ans++;
            for(int i = 0; i < n ;i++){
                if(!pr[(pos+i) % n] && (print == -1 || pq[(pos+ i) % n] > pq[print])) print = (pos + i) %n;
            }
            pr[print] = 1;
            pos = print;
        }
        cout << ans << "\n";
    }
    
    return 0;
}