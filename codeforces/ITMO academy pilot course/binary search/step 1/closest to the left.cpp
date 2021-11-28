#include <iostream>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n,k;
    cin >> n >>k;
    int* arr = new int[n];
    for(int i =0;i <n ;i++){
        cin >>arr[i];
    }
    while(k--){
        ll target;
        cin >> target;
        int l = 0, h = n-1, ans = 0;
        if(target > arr[n-1]){
            cout << n << "\n";
            continue;
        }else if(target < arr[0]){
            cout << "0\n";
            continue;
        }
        else{
            while(l <= h){
                ll mid = (l + h)/ 2;
                if(arr[mid] > target){
                    h = mid - 1;
                }else{
                    ans = mid;
                    l = mid + 1;
                }
            }
            cout << ans+1 << "\n";
        }
    }
    
    return 0;
}