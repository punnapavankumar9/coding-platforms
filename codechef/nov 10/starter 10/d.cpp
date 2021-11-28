#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n; i++){
            cin >> arr[i];
        }
        vector<int> brr(n-1);
        for(int i = 0;i < n-1;i++) cin >> brr[i];
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        if(n == 2){
            int diff = brr[0]-arr[0];
            int diff2 = brr[0] - arr[1];
            if(diff > diff2 && diff2 > 0){
                cout << diff2 << "\n";
            }else{
                cout << diff << "\n";
            }
        }else{
            int diff = brr[0]-arr[0];
            int diff2 = brr[1]-arr[1];
            if(diff == diff2){
                int mn = diff;
                diff = brr[0]-arr[1];
                diff2 = brr[1] - arr[2];
                if(diff == diff2 && diff > 0){
                    cout << min(diff, mn) << "\n";
                }else{
                    cout << mn << "\n";
                }
            }else{
                diff2 = brr[1] - arr[2];
                if(diff == diff2){
                    cout << diff << "\n";
                }else{
                    cout << brr[0]-arr[1] << "\n";
                }

            }
        }

    }
    
    return 0;
}