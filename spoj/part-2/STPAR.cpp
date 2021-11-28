#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
int arr[1100];
int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    
    int n;
    while(cin >> n && n != 0){

        stack<int> st;

        for(int i =0;i < n; i++){
            cin >> arr[i];
        }
        int l = 1;
        for(int i = 0; i < n; i++){
            while(!st.empty() && st.top() == l) l++, st.pop();
            if(arr[i] != l) st.push(arr[i]);
            else l++;
        }

        while(!st.empty() && st.top() == l) l++, st.pop();

        if(l-1 == n) cout << "yes\n";
        else cout << "no\n" ;
        }
    return 0;
}
