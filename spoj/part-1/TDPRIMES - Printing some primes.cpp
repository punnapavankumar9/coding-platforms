// solution 1
// #include <iostream>
// #include <cstring>
// #include <bitset>
// #define nl "\n"
// typedef uint64_t ll;
// using namespace std;
// const ll s = 1e8+1;

// bitset<100000001> arr;

// int main(){
    
//     arr.flip();
//     arr[0] = arr[1] = 0;
//     for(int i = 2; ll(i * i) <= s; i++){
//         if(arr[i]){
//             for(int j = ll(i * i); j <= s; j += i){
//                 arr[j] = 0;
//             }
//         }
//     }
//     int count = 0;
//     printf("2\n");
//     for(int i = 3; i <= s; i += 2){
//         if(arr[i]){
//             count++;
//             if(count == 100){
//                 count = 0;
//                 printf("%d\n", i);
//             }
//         }
//     }
    
//     return 0;
// }


// solution 2
#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
#define MAX 100100
typedef long long ll;
typedef unsigned long long ull;
vector<int> primes;
void sieve(){
    bitset<MAX> arr;
    arr.flip();
    arr[0] = arr[1] = 0;
    arr[2] = 1;
    for(int i = 3; i * i < MAX; i += 2){
        if(arr[i]){
            for(ll j = i * i; j < MAX; j += i) arr[j] = false;
        }
    }
    primes.push_back(2);
    for (int i = 3; i < MAX; i += 2) {
        if (arr[i]) primes.push_back(i);
    }
}

void segSieve (ll l , ll r) {
    bool isPrime[r-l+1];
    for (int i = 0; i < r - l + 1; ++i) isPrime[i] = true;
    if (l == 1) isPrime[0] = false;
    for (int i = 0; (ull)primes[i]*primes[i] <= r; ++i) {
        ull p = primes[i];
        ull base = (l/p)*p;
        if(base < l) base += p;
        for(ull j = base; j <= r; j += p){
            isPrime[j-l] = false;
        }
        if(p == base) isPrime[base-l] = true;
    }
    int count = -1;
    printf("2\n");
    for (int i = 0; i < r - l + 1; ++i) {
        if (isPrime[i]){
            count++;
            if(count == 100){
                count = 0;
                printf("%lld\n", i+l);
            }
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    cout.tie(0);
    sieve();
    segSieve(1, 10000);
    return 0;
}