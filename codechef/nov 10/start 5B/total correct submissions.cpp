#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        unordered_map<string , int> res;
        int n;string s;
        for(int i =0; i < x * 3; i++){
            cin >> s >> n;
            res[s] += n;
        }
        vector<int> res1;
        for(auto r : res){
            res1.push_back(r.second);
        }
        sort(res1.begin(), res1.end());
        for(int i: res1){
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}