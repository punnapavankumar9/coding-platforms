#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int* arr = new int[n];
        for(int i =0; i < n; i++) cin >> arr[i];

        sort(arr, arr+n);

        int idx = -1;
        int k = 0;
        int l = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] == arr[j]){
                    k = i;
                    l = j;
                    idx = 0;
                    break;
                }
            }
            if(idx == 0){
                break;
            }
        }
        if(idx == -1){
            int temp = arr[1];
            arr[1] = arr[n-1];
            arr[n-1] = temp;
        }else{
            swap(arr[k], arr[0]);
            swap(arr[l], arr[n-1]);
        }

        for(int i = 1; i < n-2; i += 2){
            if(arr[i] < arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
            if(arr[i+1] > arr[i+2]){
                swap(arr[i+1], arr[i+2]);
            }
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";

    }
    
    return 0;
}