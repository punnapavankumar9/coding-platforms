#include <iostream>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n, k;
    cin >> n >> k;
    int* arr = new int[n];
    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }
    while(k--){
        int target;
        cin >>target;
        int l = 0, r = n-1, ans = 0;
        if(arr[n-1] < target){
            cout<< n+1 << "\n";
            continue;
        }
        while(l <= r){
            ll mid = (l + r)/2;
            if(arr[mid] >= target){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout << ans+1 << "\n";
    }

    
    return 0;
}