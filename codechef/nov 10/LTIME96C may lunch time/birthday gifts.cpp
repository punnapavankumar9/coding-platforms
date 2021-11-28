#include <iostream>
#include <algorithm>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        int* arr = new int[n];
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n, greater<int>());
        ll sm1 = 0, sm2 = 0;
        int i = 0;
        while(k--){
            sm1 += arr[i++];
            sm2 += arr[i++];
        }
        sm2 += arr[i];
        if(sm1 > sm2){
            cout << sm1 << nl;
        }
        else cout << sm2 << nl;
    }
    
    return 0;
}