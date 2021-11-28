#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        for(int i =0; i < n; i++) cin>> arr[i]; 
        int sm = accumulate(arr, arr+n, 0);
        if(sm % k) cout << "0\n";
        else cout << "1\n";
    }
    
    return 0;
}
