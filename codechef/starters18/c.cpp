#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
vector<int> pol;

bool isPol(string s){
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}

void pre(){
    string s;
    for(int i = 1; i <= 1000; i++){
        s = "";
        int temp = i;
        while(temp){
            if(temp & 1) s += '1';
            else s+= '0';
            temp >>= 1;
        }
        if(isPol(s)){
            pol.push_back(i);
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    pre();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        int pr = pol.size()-1;
        while(n){
            int l = 0; 
            int r = pr;
            int res = 0;
            while(l <= r){
                int mid = (l + r)/2;
                if(pol[mid] <= n){
                    res = mid;
                    l = mid + 1;
                }else{
                    r = mid -1;
                }
            }
            n -= pol[res];
            pr = res;
            arr.push_back(pol[res]);
        }
        cout << arr.size() << "\n";
        for(int num : arr){
            cout << num << " ";
        }
        cout << " \n";
    }
    
    return 0;
}