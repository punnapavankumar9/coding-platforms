#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const int N = 1e6+1, mod = 1e9+9;
ll p_pow[N];
void rabin_karp(string& pattern, string& text){
    ll T = text.length(), S = pattern.length();
    vector<ll> h_t(T+1, 0);
    for(int i = 0; i < T; i++){
        h_t[i+1] = h_t[i] + ((text[i] - 'a' + 1) * p_pow[i] % mod);
    }
    ll h_s = 0;
    for(int i = 0; i < S; i++){
        h_s = (h_s + (pattern[i] - 'a' + 1)  * p_pow[i]) % mod;
    }
    vector<int> occ;
    for(int i = 0; S + i - 1 < T; i++){
        ll cur_h = (h_t[i+S] + mod - h_t[i]) % mod;
        if(cur_h == h_s * p_pow[i] %mod){
            occ.push_back(i+1);
        }
    }
    if(occ.size() == 0){
        cout << "Not Found\n";
    }else{
        cout <<  occ.size() << "\n";
        for(int i = 0; i < occ.size() ;i++){
            cout << occ[i] << " ";
        }
        cout << "\n";
    }
}

void generate_powers(){
    int p = 31;
    p_pow[0] = 1;
    for(int i =1; i < N; i++){
        p_pow[i] = (p_pow[i-1] * p) % mod;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    generate_powers();
    int t;
    cin >> t;
    string a ,b;
    while(t--){
        cin >> a >> b;
        rabin_karp(b, a);
        cout << "\n";
    }
    
    return 0;
}