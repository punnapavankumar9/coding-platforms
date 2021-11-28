#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
using cd = complex<double>;
const double PI = acos(-1);



void fft(vector<cd> &a, bool invert){
    int n = a.size();
    if(n == 1) return;

    vector<cd> a0(n/2, 0), a1(n/2, 0);
    for(int i = 0; i * 2 < n;i++){
        a0[i] = a[2 * i];
        a1[i] = a[2 * i + 1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));

    for(int i = 0; i * 2 < n; i++){
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if(invert){
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp = n;
        vector<ll> a(n+1, 0), b(n + 1, 0);
        for(int i = 0; i <= n; i++) cin >> a[i];
        for(int i = 0; i <= n; i++) cin >> b[i];

        vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
        n = 1;
        while(n < a.size() + b.size()) n <<= 1;
        fa.resize(n);
        fb.resize(n);

        fft(fa, false);
        fft(fb, false);

        for(int i =0; i < n;i++){
            fa[i] *= fb[i];
        }
        fft(fa, true);
        for(int i = 0; i <= 2 * temp ; i++){
            cout << (ll)round(fa[i].real()) << " ";
        }
        cout << "\n";

    }
    
    return 0;
}