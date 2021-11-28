// incomplete
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0;i < n ; i++){
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        vector<int> res(n, 0);
        // for(int i = 0; i < n ; i++){
        //     auto found = mp.find(arr[i]);
        //     if(found != mp.end()){
        //         mp[arr[i]]++;
        //         int x=  mp[arr[i]];
        //         if(x <= k){
        //             res[i] = mp[arr[i]];
        //         }
        //     }else{
        //         mp[arr[i]] = 1;
        //         res[i] = 1;
        //     }
        // }

        for(int i = 0;i < n; i++){
            mp[arr[i]]++;
        }
        unordered_map<int, int> track;
        for(int i = 0; i < mp.size(); i++){
            track[mp[arr[i]]] = 0;
        }
        
        for(int i = 0;i < n; i++){
            if(mp[arr[i]] >= k){
                int found = track.find(arr[i])
            }
        }



        for(int i = 0; i <n; i++){
            cout << res[i] << " ";
        }
        cout << "\n";

    }
    
    return 0;
}