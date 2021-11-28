#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

bool all_9(string s, int n){
    for(int i = 0; i < n; i++){
        if(s[i] != '9') return false;
    }
    return true;
}


int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if(all_9(s, n)){
            cout << "1";
            for(int i = 1; i < n; i++){
                cout << "0";
            }
            cout << "1\n";
            continue;
        }
        int mid = n / 2;
        int i = mid - 1;
        int j = n % 2 ? mid + 1 : mid;
        while(i >= 0 && s[i] == s[j]){
            j++;
            i--;
        }
        bool left_smaller = false;
        if(i < 0 || s[i] < s[j]) left_smaller = true;

        while(i >= 0){
            s[j] = s[i];
            i--;
            j++;
        }
        if(left_smaller){
            int carry = 1;
            i = mid - 1;
            int x = 0;
            if(n % 2){
                x = (s[mid] - '0') + carry;
                carry = x /10;
                s[mid] = (x % 10) + '0';
                j = mid + 1;
            }else j = mid;
            x = 0;
            while(i >= 0){
                x = (s[i] - '0') + carry;
                carry = x /10;
                s[i] = (x % 10) +'0';

                s[j++] = s[i--];
            }
        }
        cout << s << "\n";
    }
    
    return 0;
}