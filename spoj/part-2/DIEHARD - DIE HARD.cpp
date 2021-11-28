#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int arr[1001][1001];

int die(int h, int a, int i){
    if(h <= 0 || a<= 0) return 0;
    if(arr[h][a] != -1){
        return arr[h][a];
    }
    int x, y , z;
    x = y = z = 0;
    if(i != 1) x = 1 + die(h + 3, a+ 2, 1);
    if(i != 2) y = 1 + die(h -5, a - 10, 2);
    if(i != 3) z = 1 + die(h - 20 , a + 5, 3);

    return arr[h][a] = max({x,y,z});
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int h, a;
        cin >> h >> a;
        memset(arr, -1,sizeof(arr));
        cout << max({die(h + 3, a + 2, 1), die(h-5, a -10, 2), die(h-20, a + 5, 3)}) << "\n";
    }
    
    return 0;
}