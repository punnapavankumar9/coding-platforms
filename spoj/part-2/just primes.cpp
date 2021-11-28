#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int N = 5e4+10;

int dp[N];
vector<int> primes;
void precompute(){
    bitset<N> arr;
    arr.flip();
    arr[0] = arr[1] = false;
    arr[2] = true;
    for(int i = 3; i * i < N; i+=2){
        if(arr[i]){
            for(int j = i * i; j < N; j+=i) arr[j] = false;
         }
    }
    primes.push_back(2);
    for(int i = 3; i < N; i+=2){
        if(arr[i]) primes.push_back(i);
    }
}
void precalculate(){
    memset(dp, N+1, sizeof(dp));
    dp[0] = 0;
    for(int prime: primes){
        for(int i = N; i >= prime; i--){
            dp[i] = min(dp[i], dp[i-prime]+1);
        }
    }
    return;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    precompute();
    precalculate();
    cin >> t;
    int i = 1;
    while(t--){
        int n;
        cin >> n;
        cout << "Case " <<  i++ <<  ": " ;
        dp[n] > N? (cout << "-1\n" ):(cout << dp[n] << "\n");
    }
    return 0;
}