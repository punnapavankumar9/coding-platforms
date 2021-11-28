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
        int a,b;
        cin >>a >>b;
        int ans = a+b;
        if(ans <3){
            cout << "1\n";
            continue;
        }else if(3<= ans && ans <=10){
            cout << "2\n";
            continue;
        }else if(11 <= ans && ans <= 60){
            cout << "3\n";
            continue;
        }else{
            cout << "4\n";
            continue;
        }
    }
    
    return 0;
}