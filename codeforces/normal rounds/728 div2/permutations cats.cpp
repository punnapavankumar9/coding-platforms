#include <iostream>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void swap(int n){
    for(int i = 1; i <= n; i += 2){
        cout << i + 1  << " " << i << " "; 
    }
}
void swap2(int n){
    for(int i = 4; i <= n+2; i += 2){
        cout << i + 1  << " " << i << " "; 
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if( n == 1) {
            cout << 1 << " ";
            continue;
            }
        if(n & 1){
            cout << 3 << " " << 1 << " " << 2 << " ";
            swap2(n-3);
        }else{
            swap(n);
        }
        cout << endl ;
    }
    
    return 0;
}