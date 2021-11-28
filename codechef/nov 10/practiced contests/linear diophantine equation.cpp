#include <iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Pair{
    public:
        int a,b,c;
        Pair(){
            a = b = c = 0;
        }
        Pair(int A, int B, int C){
            a = A;
            b =B;
            c = C;
        }
};


Pair euclid(int a, int b, int c){
    if(b == 0)
        return Pair(1, 0 ,c);
    else{
        Pair res = euclid(b, a % b, c);
        Pair ans = Pair(res.b, (res.a - ((a/b) * res.b)), c);
        return ans;
    }
}

int main(){
    int a,b;
    cin >> a >>  b;

    Pair res = euclid(a, b, __gcd(a,b));

    cout << res.a << " " << res.b << " " << res .c << "\n";
    return 0;
}