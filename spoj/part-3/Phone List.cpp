#include <iostream>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
bool flag = 1;

struct trie{
    trie *next[10];
    bool end;
    trie(){
        for(int i = 0; i < 10; i++) next[i] = NULL;
        end = 0;
    }
};

void add(struct trie *root, string &s){
    trie *tail = root;
    int p = 0;
    for(int i = 0; i < s.size(); i++){
        if(tail->end) {
            flag = 0;
            break;
        }
        p = s[i]-'0';
        if(tail->next[p] == NULL) tail->next[p] = new trie();
        tail = tail->next[p];
    }
    tail->end = 1;
    for(int i = 0;i < 10; i++){
        if(tail->next[i]){
            flag = 0;
            break;
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    string s;
    int n ;
    while(t--){
        cin >> n;
        flag = 1;
        trie *head = new trie(), *tail;
        while(n--){
            cin >> s;
            if(flag){
                tail = head;
                add(tail, s);
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}