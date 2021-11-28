#include <iostream>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i =0; i  <n; i++) cin >> arr[i];
        int c = 0;
        for(int i =0; i < n; i++){
            if(arr[i] <=7 and arr[i] >= 1){
                c++;
                if(c == 7){
                    cout << i+1 << "\n";
                }
            }
        }
    }
    
    return 0;
}