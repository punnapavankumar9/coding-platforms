#include <iostream>
#include <bits/stdc++.h>
#define nl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >>a >> b;
        if(a > b){
            swap(a, b);
        }
        cout << b-a <<" ";
        if(b-a == 0){
            cout << "0";
        }else {
            cout << min(a % (b-a), b-a - (a % (b-a)));
        }
        cout << nl;
    }
    
    return 0;
}