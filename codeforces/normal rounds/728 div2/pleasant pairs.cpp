#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int binary_search(vector<vector<int>> & arr, int target, int l){
    int h = arr.size()-1;
    while(l <= h){
        ll mid  =( l + h) / 2;
        if(arr[mid][0] == target){
            return mid;
        }else if(arr[mid][0] > target){
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    scanf("%d", &t);
    while(t--){
        int n ;
        scanf("%d", &n);
        vector<int> arr(n);
        vector<vector<int>> arr1(n, vector<int>(2, 0));
        for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
        for(int i = 0; i < n; i++){
            arr1.push_back({arr[i], i+1});
        }
        sort(arr1.begin(), arr1.end());
        ll count = 0;
        for(int i = 0; i < n; i++){
            int 
            if(binary_search(arr1, ) == req){
                count++;
            }
        }

    }
    
    return 0;
}