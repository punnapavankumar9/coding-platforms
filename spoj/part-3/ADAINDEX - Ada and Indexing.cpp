#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;

struct trie
{
    ll cnt;
    trie *next[26];
    trie(){
        cnt = 0;
        for(int i = 0; i < 26; i++) next[i] = NULL;
    }
};

void addWord(trie* root, string &s){
    trie * temp = root;
    for(int i = 0; i < s.size(); i++){
        int p = s[i]-'a';
        if(temp->next[p] == NULL) temp->next[p] = new trie();
        temp->next[p]->cnt = temp->next[p]->cnt+1;
        temp = temp->next[p];
    }
}


ll query(trie* root, string &s){
    trie* temp = root;
    ll cnt = 0;
    bool falg = true;
    for(int i =0 ;i < s.size();i++){
        if(temp->next[s[i]-'a'] == NULL) return 0LL;
        temp = temp->next[s[i]-'a'];
    }
    return temp->cnt;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n, m;
    string s;
    trie* root = new trie();
    cin >>n >> m;
    for(int i = 0 ; i < n; i++){
        cin >> s;
        addWord(root, s);
    }
    for(int i  =0 ; i < m; i++){
        cin >> s;
        cout << query(root, s) << "\n";
    }
    
    return 0;
}