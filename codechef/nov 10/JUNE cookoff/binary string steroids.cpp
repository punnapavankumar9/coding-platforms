// incompleted
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define nl "\n"
typedef long long ll;
using namespace std;

int min_value(string s, int n){
    int count = 0;
    int res = INT_MAX;
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sm =0;
        for(int i =0; i < n; i++) sm += (s[i]-'0');

        if(sm == 0){
            cout << 1 << nl;
            continue;
        }else if(sm == 1){
            cout << 0 << nl;
            continue;
        }
        // vector<int> res;
        // map<int ,vector<int>> idx;
        // int x = 0;
        // int dist = 0;
        // for(int i = 1; i < n; i++){
        //     if(s[i] == '1' && dist != 0){
        //         idx[dist].push_back(i);
        //         dist = 0;
        //         x = i;
        //     }
        //     dist++;
        // }
        // for(int i =0 ; i < n; i++){
        //     if(s[i] == '1'){
        //         idx[n - x -1 + i].push_back(x);
        //     }
        // }
        int res = INT_MAX;




    }
    
    return 0;
}