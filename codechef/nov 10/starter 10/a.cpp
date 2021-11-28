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
        int a,b,c;
        cin >> a >> b >> c;
        if(a < b && a < c){
            cout << "Draw\n";
        }else if(b < a && b < c){
            cout << "Bob\n";
        }else{
            cout << "Alice\n";
        }
    }
    
    return 0;
}