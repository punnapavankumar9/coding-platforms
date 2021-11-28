// incompleted
#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

ll value(char c){
    if(c >= '0' && c <= '9'){
        return c-'0';
    }else if(c >= 'A' && c <= 'Z'){
        return (c - 'A') + 10;
    }else if(c >= 'a' && c <= 'f'){
        return (c - 'a') + 36;
    }
    return 0;
}
char in_42(ll n){
    if(n >= 0 && n <= 9){
        return n + '0';
    }else if(n >= 10 && n <= 35){
        return (n - 10)+ 'A';
    }else if(n >= 36 && n <= 41){
        return (n - 36)+ 'a';
    }
    return '0';
}

ll convert_to_int(string s){
    ll res = 0;
    for(int i = 0; i < s.size(); i++){
        res = (res * 42) + value(s[i]);
    }
    return res;
}
const ll m = convert_to_int("LIFE");
string convert_to_42(ll n){
    string res = "";
    vector<char> r1;
    while (n)
    {
        r1.push_back(in_42(n % 42));
        n /= 42;
    }
    for(int i = r1.size()-1; i >= 0; i--){
        res += r1[i];
    }
    if(res == "") return "0";
    return res;
}
ll binpow(int a, int b){
    ll res = 1;
    while (b)
    {
        if( b & 1) res =  (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string a,  c;
        char b;
        cin >> a >> b >> c;
        ll n1 ,n2;
        ll ans = 0;
        n1 = convert_to_int(a);
        n2 = convert_to_int(c);
        switch (b)
        {
        case '+':
            ans = (n1 % m + n2 % m) % m;
            break;
        
        case '*':
            ans = (n1 % m * n2 % m);
            break;

        case '-':
            ans = ((n1 % m) - (n2 % m)) % m;
            break;
        
        case '^':
            ans = binpow(n1,n2);
            break;
        
        default:
            break;
        }
        string sol = convert_to_42(ans);
        cout << sol << "\n";
    }
    
    return 0;
}