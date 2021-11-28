#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<vector<bool>> res(n, vector<bool>(m, 0));
        for(int i : {0 , n-1}){
            for(int  j : { 0 ,m-1}){
                res[i][j] = true;
            }
        }
        for(int i = 2; i <= n-3;i += 2){
            res[i][0] = res[i][m-1] = true;
        }
        for(int i = 2; i <= m-3; i += 2){
            res[0][i] = res[n-1][i] = true;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0;j < m; j++){
                cout << res[i][j];
            }
            cout << endl;
        }
        cout << "\n";
    }
    
    return 0;
}