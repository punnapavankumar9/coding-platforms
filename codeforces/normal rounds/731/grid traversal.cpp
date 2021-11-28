#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int BFS(int x, int y,int count,  vector<int> &req, vector<vector<bool>> &vis){
    if((x < 0 ||  x > 1000 || y < 0 || y > 1000) && (!vis[x][y] && count >= 0)){
        return INT_MAX;
    }
    vis[x][y] = false;
    if(x == req[2] && y == req[3]) return count;
    count++;
    int a = BFS(x + 1, y + 1, count, req, vis);
    int b = BFS(x - 1, y + 1, count, req, vis);
    int c = BFS(x + 1, y - 1, count, req, vis);
    int d = BFS(x - 1, y - 1, count, req, vis);
    return min(a, min(b, min(c,d)));
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int A1, A2, B1, B2, C1, C2;
        cin >> A1 >> A2;
        cin >> B1 >> B2;
        cin >> C1 >> C2;
        vector<vector<bool>> arr(1000, vector<bool>(1000, true));
        arr[C1-1][C2-1] = 0;
        vector<int> req = {A1, A2, B1, B2};
        cout << BFS(A1,A2,0, req, arr);

    }
    
    return 0;
}