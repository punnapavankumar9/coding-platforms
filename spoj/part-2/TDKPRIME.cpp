#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int sz = 9e7+1; 
bool arr[sz];
vector<int> primes;
void precompute(){
    memset(arr, 1, sizeof(arr));
    arr[0] = arr[1] = 0;
    for(int i = 2; i * i < sz; i++ ){
        if(arr[i]){
            for(int j = i * i; j <= sz; j += i){
                arr[j] = false;
            }
        }
    }
    for(int i = 2;i < sz; i++){
        if(arr[i]) primes.push_back(i);
    }
}


int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    precompute();
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cout << primes[k-1] << "\n";
    }
    
    return 0;
}