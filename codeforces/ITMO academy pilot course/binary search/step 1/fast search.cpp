#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i =0; i < n; i++) cin >>arr[i];
    sort(arr.begin(), arr.end());
    ll t;
    cin >> t;
    while(t--){
        ll lo, hi;
        cin >> lo >> hi;
        ll ans1 = 0, ans2 = 0;
        ll l = 0, r = n-1;
        while(l <= r){
            ll mid = (l + r)/ 2;
            if(arr[mid] > hi){
                r = mid - 1;
            }else{
                ans1 = mid;
                l = mid + 1;
            }
        }
        ans1++;
        l = 0, r = n-1;
        while(l <= r){
            ll mid = (l + r)/2;
            if(arr[mid] >= lo){
                ans2 = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        ans2++;
        ll res = ans1 - ans2;
        cout << (res ? res: 0 )  << "\n";
    }
    
    return 0;
}