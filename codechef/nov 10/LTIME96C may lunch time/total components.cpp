#include <iostream>
#include <vector>
#define nl "\n"
typedef long long ll;
using namespace std;
const int k = 1e7+2;
vector<int> arr(k, 1);

void sieve(){
    for(int i = 2; i * i <= k; i++){
        if(arr[i] == 1){
            for(int j = i*i; j <= k; j += i){
                arr[j] = 0;
            }
        }
    }
}

void pre(){
    arr[0] = arr[1] = 0;
    for(int i = 2; i <= k; i++){
        if(arr[i] == 1) arr[i] = arr[i-1]+1;
        else arr[i] = arr[i-1]; 
    }
}

int main(){
    sieve();
    pre();
    int t;
    cin >> t;   
    while(t--){
        int n;
        cin >> n;
        if(n == 2) {
            cout << 1 << nl;
            continue;
        }
        if(n == 3){
            cout << 2 << nl ;
            continue;
        }
        cout << arr[n] - arr[n/2] + 1 << nl;
    }
    return 0;
}