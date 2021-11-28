#include <iostream>
#include <climits>
using namespace std;
const int N =1e6+2;
#define pi pair<int, int>
typedef long long ll;
pi tree[4*N];
ll arr[N];

pi combine(pi& a, pi& b){
    if(a.first > b.first) return b;
    if(b.first > a.first) return a;
    return make_pair(a.first, a.second+b.second);
}

void build(int node, int st, int en){
    if(st == en){
        tree[node] = make_pair(arr[st], 1);
        return;
    }
    int mid = (st + en) / 2;
    build(node * 2, st , mid);
    build(node* 2 +1, mid+1, en);
    tree[node] = combine(tree[node*2], tree[node*2+1]);
    return;
}

void update(int node, int st, int en, int idx, ll val){
    if(st == en){
        tree[node] = make_pair(val, 1);
        arr[st] = val;
        return;
    }
    int mid = (st + en) /2;
    if(idx <= mid){
        update(node* 2, st, mid, idx, val);
    }else{
        update(node * 2 + 1, mid + 1, en, idx, val);
    }
    tree[node] = combine(tree[node * 2], tree[node * 2 +1]);
    return ;
}

pi query(int node, int st, int en, int l, int r){
    if(st > r || en < l){
        return make_pair(INT_MAX, 0);
    }
    if(l <= st && en <= r){
        return tree[node];
    }
    int mid = (st + en) / 2;
    pi q1 = query(node * 2, st, mid, l , r);
    pi q2 = query(node * 2 + 1, mid + 1, en, l ,r);

    return combine(q1,q2);
}

signed main(){
    int n,m;
    cin >> n >> m;
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }
    build(1,0,n-1);
    while(m--){
        int type;
        cin >> type;
        if(type == 1){
            ll idx, val;
            cin >> idx >> val;
            update(1, 0, n-1, idx, val);
        }else{
            int l, r;
            cin >> l >> r;
            pi res = query(1,0,n-1,l,r-1);
            cout << res.first << " " << res.second  << "\n";
        }
    }    
    
    return 0;
}