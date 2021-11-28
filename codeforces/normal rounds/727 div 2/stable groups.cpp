// incomplete problem
#include <iostream>
#include <algorithm>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    ll n , k , x, count = 1;
    cin >> n >> k >> x;
    int* arr =new int[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if(1-arr[0] > x){
        if(k) k--;
        else count++;
    }
    for(int i = 1; i <  n-1; i++){
        if(arr[i+1] - arr[i]  > x){
            if(k) k--;
            else count++;
        }
    }
    
    cout << count << nl;
    return 0;
}