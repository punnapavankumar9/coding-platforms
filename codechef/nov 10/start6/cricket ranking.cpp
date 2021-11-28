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
        int r1,w1,c1,r2,w2,c2;
        cin >> r1 >> w1 >> c1;
        cin >> r2 >> w2 >> c2;
        int A = 0, B=0;
        if(r1 > r2) A++;
        else B++;

        if(w1 > w2) A++;
        else B++;

        if(c1 > c2) A++;
        else B++;

        if(A > B) cout << "A\n";
        else cout << "B\n";
    }
    
    return 0;
}