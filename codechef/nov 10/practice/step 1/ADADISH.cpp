#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s;
     while(n-- > 0){
        cin >> s;
        int* arr = new int[s];
        int a = 0;
        int b = 0;
        for(int i=0; i < s; i++) cin >> arr[i];

        sort(arr, arr+s, greater<int>());

        for(int i =0; i < s; i++) a>b ? b += arr[i] : a += arr[i];

        a > b ? cout << a : cout << b;

     }
    
    return 0;
}