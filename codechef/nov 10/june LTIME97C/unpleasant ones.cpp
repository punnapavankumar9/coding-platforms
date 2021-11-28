#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define setbits(x) __builtin_popcount(x)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int score(int n){
    int count = 0, mx = 0;
    while(n >0){
        if(n & 1){
            count++;
        }else{
            count = 0;
        }
        n /= 2;
        mx = max(count, mx);
    }
    return mx;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> evens, odds;
        
        for(int i =0; i < n; i++){
            int x;
            cin >> x;
            if(x & 1){
                odds.push_back(x);
            }else{
                evens.push_back(x);
            }
        }
        sort(evens.begin(), evens.end(), [](int a, int b){
            return score(a) > score(b);
        });
        sort(odds.begin(), odds.end(), [](int a, int b){
            return score(a) < score(b);
        });
        int l = 0, r =0;
        int count = 0;
        while(l < odds.size() && r < evens.size()){
            count++;
            if(count & 1){
                cout << evens[l] << " ";
                l++;
            }else{
                cout << odds[r] << " ";
                r++;
            }
        }
        while(l < evens.size()){
            cout << evens[l] <<" ";
            l++;
        }
        while(r < odds.size()){
            cout << odds[r] << " ";
            r++;
        }
        

        cout << endl;

    }
    
    return 0;
}