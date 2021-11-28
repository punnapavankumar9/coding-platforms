#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x%2 == (x %(int (x-1)/2))){
            cout << 1 << " ";
        }else{
            cout << 0 << " ";
        }
    }
    
    return 0;
}