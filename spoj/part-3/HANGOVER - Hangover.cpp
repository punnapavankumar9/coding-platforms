#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    float n;
    int cnt = 0;
    int i = 0 ;
    vector<int>res(1000,0);
    while(true){
        cin >> n;
        if(n == 0) break;
        float sum = 0;
        for(i = 2;sum < n; i++) sum += (1/float(i));
        res[cnt] = i-2;
        cnt++;
    }
    for(int i = 0; i <cnt ; i++){
        cout << res[i] << " card(s)\n";
    }
    
    return 0;
}