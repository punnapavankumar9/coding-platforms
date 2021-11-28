#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n, a , b;
        cin >>n >> a >>b;
        ll res = 1;
        bool flag = false;
        if(a == 1){
            if((n-1) % b == 0){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
            continue;
        }
        while(res <= n){
            if((n-res) % b == 0){
                flag = true;
                break;
            }
            res = res * a;
        }
        cout << (flag ? "Yes\n" : "No\n") ;
    }
    
    return 0;
}