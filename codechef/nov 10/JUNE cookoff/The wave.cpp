#include <iostream>
#include <algorithm>
#include <vector>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i =0 ; i < n ;i++) cin >> arr[i];

    vector<int> res(2*1e5+5, -2);
    sort(arr.begin(), arr.end());

    res[0] = (n%2) ? -1 : 1;
    for(int i = 0; i < q; i++){
        int q;
        cin >> q;
        int x = lower_bound(arr.begin(), arr.end(), q)-arr.begin();
        if(arr[x] == q){
            cout << 0 << nl;
        }else{
            if(!(n&1)){
                cout << ((x & 1) ? "NEGATIVE": "POSITIVE") << nl;
            }else{
                cout << ((x & 1) ? "POSITIVE": "NEGATIVE") << nl;
            }
            
        }
    }    
    return 0;
}