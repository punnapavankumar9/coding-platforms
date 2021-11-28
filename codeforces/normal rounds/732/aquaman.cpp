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
        int n;cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }for(int i =0 ;i < n;i++){
            cin >> b[i];
        }
        ll sm = 0;
        for(int i = 0; i < n;i++){
            sm += (a[i] -b[i]);
        }
        if(sm != 0){
            cout << "-1\n" ;
            continue;
        }
        vector<int> inc, dnc;
        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                for(int j = 0; j < (a[i]-b[i]); j++){
                    dnc.push_back(i);
                }
            }else if(a[i] < b[i]){
                for(int j = 0; j < (b[i]-a[i]); j++){
                    inc.push_back(i);
                }
            }
        }
        if(inc.size() == dnc.size()){
            cout << inc.size() << "\n";
            for(int i = 0;i < inc.size();i++){
                cout << dnc[i]+1 << " " << inc[i]+1 << "\n";
            }
        }else{
            cout << "-1\n";
        }

    }
    
    return 0;
}