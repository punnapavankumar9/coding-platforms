#include <iostream>
#include <vector>
#define nl "\n"
typedef unsigned long long ll;
#define vvi vector<vector<int>> 
#define vi vector<int>
#define rep(s , j) for(int i = s; i <j; i++)
#define int ll

const int MOD = 1e9+7;
using namespace std;
void mult(vvi& a, vvi& b){
    int x = ((a[0][0] * b[0][1])%MOD + (a[0][1] * b[1][1])%MOD) % MOD;
    int w = ((a[0][0] * b[0][0])%MOD + (a[0][1] * b[1][0])%MOD) % MOD;
    int y = ((a[1][0] * b[0][0])%MOD + (a[1][1] * b[1][0])%MOD) % MOD;
    int z = ((a[1][0] * b[0][1])%MOD + (a[1][1] * b[1][1])%MOD) % MOD;
    a[0][0] = w;
    a[0][1] = x;
    a[1][0] = y;
    a[1][1] = z;
    return ;
}

ll matExpo(vvi& a, int n){
    vvi res({{1,0}, {0 ,1}});
    while(n){
        if(n&1) mult(res, a);
        mult(a, a);
        n >>= 1;
    }
    return res[0][1];
}

signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vvi P = {{1,1},{1,0}};
        vvi P1 = P;
        vvi F = {{0,1}};
        ll res = matExpo(P, n+1);
        ll res1 = matExpo(P1, m+2);
        cout << ((res1 - res) + MOD)%MOD << nl;
    }
    
    return 0;
}