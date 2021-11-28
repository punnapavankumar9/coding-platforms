#include <iostream>
#include <climits>
using namespace std;
const int N =1e6+2;
typedef long long ll;
ll tree[4*N];
ll arr[N];

void build(int node, int st, int en){
    if(st == en){
        tree[node] = arr[st];
        return;
    }
    int mid = (st + en) / 2;
    build(node * 2, st , mid);
    build(node* 2 +1, mid+1, en);
    tree[node] = min(tree[node*2], tree[node*2+1]);
    return;
}

void update(int node, int st, int en, int idx, ll val){
    if(st == en){
        tree[node] = val;
        arr[st] = val;
        return;
    }
    int mid = (st + en) /2;
    if(idx <= mid){
        update(node* 2, st, mid, idx, val);
    }else{
        update(node * 2 + 1, mid + 1, en, idx, val);
    }
    tree[node] = min(tree[node * 2], tree[node * 2 +1]);
    return ;
}

ll query(int node, int st, int en, int l, int r){
    if(st > r || en < l){
        return INT_MAX;
    }

    if(l <= st && en <= r){
        return tree[node];
    }
    int mid = (st + en) / 2;
    ll q1 = query(node * 2, st, mid, l , r);
    ll q2 = query(node * 2 + 1, mid + 1, en, l ,r);

    return min(q1,q2);
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
            cout << (ll)query(1,0,n-1,l,r-1) << "\n";
        }
    }
    
    
    return 0;
}