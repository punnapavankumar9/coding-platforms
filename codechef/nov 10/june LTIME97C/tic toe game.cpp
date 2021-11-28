#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

// int getk(vector<pair<int, int>>&player, int n, int m){
//     sort(player.begin(), player.end());
//     int previ = ; prev
//     for(int i = 0; i <n; i++){
//         for(int j = 0; j < n;j++){
//             if()
//         }
//     }
// }

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<char>> Board(n , vector<char>(m, 0));
        for(int i = 0; i < n;i++){
            int l1, l2;
            cin >> l1 >> l2;
            if(i & 1){
                Board[l1][l2] = 'B';
            }else{
                Board[l1][l2] = 'A';
            }
        }
    }
    
    return 0;
}