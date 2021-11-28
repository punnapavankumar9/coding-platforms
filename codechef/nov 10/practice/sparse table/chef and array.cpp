#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

const int N = 1e5+5, LOG = 17;
int arr[N][LOG], lg[N+10];

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    memset(arr, 0 ,sizeof(arr));
    memset(lg, 0, sizeof(lg));
    lg[1] = 0;
    for(int i = 2;i <= N; i++){
        lg[i] = lg[i/2] + 1;
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i][0];
    }
    for(int j = 1; j < LOG; j++)
        for(int i = 0; (i + (1 << j)-1) < n; i++)
            arr[i][j] = max(arr[i][j-1], arr[i+ (1<<(j-1))][j-1]);

    int m , x , y;
    cin >> m >> x >> y;
    ull sm = 0;
    while(m--){
        int l = min(x,y), r = max(x,y);
        int j = lg[r-l+1];
        sm += max(arr[l][j], arr[r-(1<<j)+1][j]);
        x = (x +7) % (n-1);
        y = (y + 11) % n;
    }
    cout << sm << "\n";

    return 0;
}