#include <iostream>

using namespace std;
const int N =1e6+2;
typedef long long ll;
ll tree[4*N];
ll arr[N];

void build(ll node, ll st, ll en){
    if(st == en){
        tree[node] = arr[st];
        return;
    }
    ll mid = (st + en) / 2;
    build(node * 2, st , mid);
    build(node* 2 +1, mid+1, en);
    tree[node] = tree[node*2] + tree[node*2+1];
    return;
}

void update(ll node, ll st, ll en, ll idx, ll val){
    if(st == en){
        tree[node] = val;
        arr[st] = val;
        return;
    }
    ll mid = (st + en) /2;
    if(idx <= mid){
        update(node* 2, st, mid, idx, val);
    }else{
        update(node * 2 + 1, mid + 1, en, idx, val);
    }
    tree[node] = tree[node * 2] + tree[node * 2 +1];
    return ;
}

ll query(ll node, ll st, ll en, ll l, ll r){
    if(st > r || en < l){
        return 0;
    }

    if(l <= st && en <= r){
        return tree[node];
    }
    ll mid = (st + en) / 2;
    ll q1 = query(node * 2, st, mid, l , r);
    ll q2 = query(node * 2 + 1, mid + 1, en, l ,r);

    return q1 + q2;
}

signed main(){
    ll n,m;
    cin >> n >> m;
    for(ll i =0; i <n; i++){
        cin >> arr[i];
    }
    build(1,0,n-1);
    while(m--){
        ll type;
        cin >> type;
        if(type == 1){
            ll idx, val;
            cin >> idx >> val;
            update(1, 0, n-1, idx, val);
        }else{
            ll l, r;
            cin >> l >> r;
            cout << (ll)query(1,0,n-1,l,r-1) << "\n";
        }
    }
    
    
    return 0;
}