#include <iostream>
#include <cstring>
using namespace std;

const int s = 1e5+2;
bool arr[s];

void sieve(int n){
    for(int i = 2; i * i <= n ;i++){
        if(!arr[i]){
            for(int j = 2 * i; j <= n ; j += i){
                arr[j] = true;
            }
        }
    }
}

int main(){
    long long n;
    cin >> n;
    memset(arr,false, sizeof arr);
    uint64_t sm = 1;
    sieve(n);
    
    for(int i = 2; i < n; i++){
        if(!arr[i]){
            sm += i;
        }
    }
    cout << sm;

    return 0;
}