#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n,k;
    cin >> n >>k;
    // vector<int> arr(n, 0);
    int* arr = new int[n];
    for(int i = 0;i <n;i++){
        cin >>arr[i];
    }

    while(k--){
        int target;
        cin >> target;
        int lo =0, hi = n-1;
        bool ans = false;
        while(lo <= hi){
            ll mid = (lo + hi)/2;
            if(arr[mid] == target){
                ans = true;
                break;
            }
            if(arr[mid] > target){
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        if(ans == true){
            cout << "YES\n" ;
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}