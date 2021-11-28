// #include <iostream>
// #define nl "\n"
// typedef long long ll;
// using namespace std;
// int const s = 1e6+2;
// ll arr[s];

// void precompute(){
//     for(int i = 0; i <= s; i++){
//         arr[i] = i;
//     }
//     for(int i =2; i <= s; i++){
//         if(arr[i] == i){
//             for(int j = 2*i ;j <= s; j += i){
//                 arr[j] *= i-1;
//                 arr[j] /= i;
//             }
//             arr[i] = i-1;
//         }
//     }
// }

// int main(){
//     cin.tie(0)->sync_with_stdio(false);cout.tie(0);
//     for(int i = 0; i < s; i++){
//         arr[i] = i;
//     }
//     for(int i =2; i <= s; i++){
//         if(arr[i] == i){
//             for(int j = 2*i ;j <= s; j += i){
//                 arr[j] *= i-1;
//                 arr[j] /= i;
//             }
//             arr[i] = i-1;
//         }
//     }
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         cout << arr[n] << "\n";
//     }
    
//     return 0;
// }
#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int etf(int n){
    int res = n;
    for(int i = 2; i * i <=n ; i++){
        if(n % i == 0){
            while(n%i == 0) n /= i;
            res -= res/i;
        }
    }
    if(n > 1){
        res -= res/n;
    }
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", etf(n));
    }
    
    return 0;
}