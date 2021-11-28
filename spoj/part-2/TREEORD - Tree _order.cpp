#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
vector<int> res;
unordered_map<int, int> mp;
int idx = 0;
class Node{
    public:
    int data;
    Node* left, * right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node* build(vector<int> &in, vector<int>& pre, int st, int en){
    
    if(st > en) return NULL;

    int curr = pre[idx];
    idx++;
    Node* node = new Node(curr);
    int pos = mp[curr];
    if(st == en) return node;

    node->left = build(in , pre, st, pos-1);
    node->right = build(in , pre, pos+ 1, en);

    return node;
}

void postorder(Node* root){
    if(root == NULL) return ;
    postorder(root->left);
    postorder(root->right);
    res.emplace_back(root->data);
    return;
}

bool compare(vector<int>& a, vector<int>& b){
    int n = a.size();
    for(int i = 0 ; i < n ; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n; cin >> n;
    vector<int> in(n), pre(n), post(n);

    for(int i = 0 ;i < n; i++){
        cin >> pre[i];
    }
    for(int i = 0 ;i < n; i++){
        cin >> post[i];
    }
    for(int i = 0 ;i < n; i++){
        cin >> in[i];
        mp[in[i]] = i;
    }

    Node *node = build(in ,pre, 0 , n-1);
    postorder(node);
    compare(res, post) ? (cout << "yes\n") : cout << "no\n" ;
   return 0;
}