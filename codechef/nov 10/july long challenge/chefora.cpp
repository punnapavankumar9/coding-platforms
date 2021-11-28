#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

const int N = 1e5+10;
vector<int> arr(N, 0);
bool checkPol(int n){
    int x= n, d = 0;
    while(n){
        d = d * 10 + int(n%10);
        n /= 10;
    }
    return x == d;
}

void generate(){
    arr[0] = 0;
    for(int i = 1; i < 10; i++){
        arr[i] = i;
    }
    int start = 100;
    for(int i = 10; i < N;){
        for(ll j = start; j < (start * 100) && i < N; j += 10){
            if(checkPol(j)){
                arr[i] = j;
                i++;
            }if(checkPol(j+1)){
                j++;
                arr[i] = j;
                i++;
            }
        }
        start *= 100;
    }
}

int ModMul(ll a, ll b){
    int res = 0;
    while(b >0){
        if(b & 1) res = res + a;
    }
}

int binPow(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1) res = res * a;
        a *= a;
        b >>= 1;
    }
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    generate();
    int t;
    cin >> t;
    while(t--){
        ll L, R;
        for(int i = L; i <= R; i++){
            
        }
    }
    
    return 0;
}