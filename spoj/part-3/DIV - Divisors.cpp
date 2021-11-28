#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int mx = 1e6;
int divisors[mx+10];
vector<int> primes[mx+10];

void sieve(){
    for(int i = 1;i <= mx; i++){
        for(int j = i ; j <= mx; j+=i) divisors[j]++;
    }
    for(int i = 2;i <= mx; i++){
        if(!primes[i].size()){
            for(int j = i ; j <= mx; j+= i) primes[j].push_back(i);
        }
    }
}


int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    sieve();
    int cnt = 0;
    for(int i = 1; i<=mx; i++){
        int x = divisors[i];
        if(primes[x].size() == 2 && primes[x][0] * primes[x][1] == x){
            cnt++;
            if(cnt % 9 == 0) cout << i << "\n";
        }
    }
    return 0;
}