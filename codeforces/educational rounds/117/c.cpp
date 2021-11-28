#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;


int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ull n,x;
        cin >> n >> x;
        ull r1 = (ull)(n * (n+1))/2;
        if((ull)(n* (n + 1))/2 + ((n-1)/2)*((2*(n-1)) - (n-2)) <= x){
            cout <<(2 * n )- 1 << "\n";
            continue;
        }
        if(r1 > x){
            ull l = 1, r = n;
            ull r2 = 0;
            ll res = 0;
            while(l <= r){
                ull mid = (l + r)/2;
                ull r2 = ull(mid * (double)(mid+1))/2;
                if(r2 <= x){
                    res = mid;
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
            cout << l << "\n";
            continue;
        }else{
            x = x - r1;
            ll res = 0;
            ull l = 1, r = n-1;
            while(l <= r){
                ull mid = (l + r)/2;
                ull r2 = (ull)((double)(mid-1)/2)*((ull)2*(n-1)-(mid-2));
                if(r2 <= x){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                    res = mid-1;
                }
            }
            
            cout << n + res-1 << "\n";
            continue;

        }

    }
    
    return 0;
}