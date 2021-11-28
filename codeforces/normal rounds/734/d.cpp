// incomplete
#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void sorting(int n, vector<vector<double>>& arr){
    sort(arr.begin(), arr.end(), [&](vector<double>& a, vector<double> &b){
        return (a[n] > b[n]);
    });
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> arr(n);
        for(int i = 0; i< n; i++) cin >> arr[i];
        vector<vector<double>> proc(n , vector<double>(5, 0));
        for(int i = 0;i < n; i++){
            int x = arr[i].length();
            for(int j = 0;j < x; j++){
                proc[i][arr[i][j]-97]++;
            }
            for(int k = 0; k < 5 ;k++){
                proc[i][k] = (double)((proc[i][k] * 100)/x);
            }
        }
        int mx = 0;
        for(int i = 0; i < 5; i++){
            sorting(i, proc);
            double prev = proc[0][i]; 
            int mn = 0;
            if(prev <= 50) continue;
            mn++;
            for(int j = 1; j < n; j++){
                if(double((proc[j][i] + prev)/(j+1)) > 50){
                    prev += proc[j][i];
                    mn++;
                }else{
                    break;
                }
            }
            if(mx < mn){
                mx = mn;
            }
        }
        cout << mx << "\n";
    }
    return 0;
}