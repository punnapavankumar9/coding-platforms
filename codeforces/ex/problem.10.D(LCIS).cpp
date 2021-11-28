// incomplete 
#include <iostream>
#define nl "\n"
typedef long long ll;
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    int n;
    cin >> n;
    int* arr1 = new int[n];
    for(int i = 0; i <n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int* arr2 = new int[n];
    for(int i =0 ; i < m ;i++){
        cin >>arr2[i];
    }
    // int* dp = new int[n][m];


    
    return 0;
}