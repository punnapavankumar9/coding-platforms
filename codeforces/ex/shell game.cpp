#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int n1, n2;
    cin >> n1>> n2;
    if(n1 == n){
        n = n2;
    }else if(n2 == n){
        n = n1;
    }
    cin >> n1>> n2;
    if(n1 == n){
        n = n2;
    }else if(n2 == n){
        n = n1;
    }
    cin >> n1>> n2;
    if(n1 == n){
        n = n2;
    }else if(n2 == n){
        n = n1;
    }
    cout << n << "\n";

    
    return 0;
}