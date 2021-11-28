#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_calc(string& s){
    int n = s.size();
    vector<int> prefix(n, 0);
    int j = 0;
    for(int i = 1; i < n; i++){
        j = prefix[i-1];
        while(j > 0 && s[i] != s[j]) j = prefix[j-1];
        if(s[i] == s[j]) j++;
        prefix[i] = j;
    }
    return prefix;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie();
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        vector<int> prefix = prefix_calc(b);
        vector<int>res;
        int i= 0, j = 0, pos = -1;
        while(i < a.size()){
            if(a[i] == b[j]){
                i++;j++;
            }else{
                if(j != 0){
                    j = prefix[j-1];
                }else{
                    i++;
                }
            }
            if(j == b.size()){
                res.push_back(i - b.size() + 1);
            }
        }
        int x = res.size();
        if(x){
            cout << x << "\n";
            for(int i =0; i <x; i++){
                cout << res[i] << " ";
            }
            cout << "\n";
        }else{
            cout << "Not Found\n";
        }
        cout << "\n";

    }
    return 0;
}