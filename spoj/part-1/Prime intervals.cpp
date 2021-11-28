#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
#define MAX 47000
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
    for (int i = 0; i < r - l + 1; ++i) {
        if (isPrime[i]) printf("%lld\n", i+l);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    cout.tie(0);
    sieve();
    int t;
    scanf("%ld", &t);
    while (t--) {
        ull l, r;
        scanf("%lld %lld", &l, &r);
        segSieve(l, r);
    }
    return 0;
}