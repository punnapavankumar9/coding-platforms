#include <iostream>
#include <vector>
#include <cstring>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cout << "enter a number";
    int t;
    cin >> t;
    vector<bool> arr(t+1, true);
    arr[0] = arr[1] = false;
    for(int i = 2; i <= t; i += 2){
        arr[i] = true;
    }

    for(int i = 3; i * i <= t ; i += 2){
        if(arr[i]){
            for(int j = i * i; j <= t ;j += i){
                arr[j] = false;
            }
        }
    }
    cout << 2 << "    ";
    for(int i = 3; i <= t ; i += 2){
        if(arr[i]) cout << i << "    ";
    }
    
    return 0;
}