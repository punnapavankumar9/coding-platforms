#include <iostream>
#include <climits>
using namespace std;
using ll = long long;
#define pi pair<int, int>
const ll N= 1e6+2;
pi tree[N * 4];
ll arr[N];

pi combine(pi& a, pi& b){
    if(a.first > b.first) return b;
    if(a.first < b.first) return a;
    return make_pair(a.first, a.second+b.second);
}

void build(int node, int st, int en){
    if(st == en){
        tree[node] = make_pair(arr[st], 1);
        return;
    }
    int mid = (st + en) / 2;
    build( 2 * node, st, mid);
    build(2 * node  +1, mid+1, en);
    tree[node] = combine(tree[node * 2] , tree[node * 2 + 1]);
    return;
}

void update(int node, int st, int en, int idx, ll val){
    if(st == en){
        tree[node] = make_pair(val, 1);
        arr[st] = val;
        return;
    }
    int mid = (st + en) / 2;
    if(idx <= mid){
        update(node* 2, st, mid, idx, val);
    }else{
        update(node * 2 + 1, mid + 1, en, idx, val);
    }
    tree[node] = combine(tree[node *2], tree[node * 2 + 1]);
    return;
}

pi query(int node, int st, int en, int l, int r){
    if(en < l || st > r){
        return {INT_MAX, 0};
    }
    if(l <= st && en <= r){
        return tree[node];
    }
    int mid = (st + en)/2;
    pi q1 = query(2 * node, st, mid, l , r);
    pi q2 = query(2 * node +1, mid + 1, en, l , r);

    return combine(q1, q2);
}



signed main(){
    ll n ,t;
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    cin >> n >> t;
    for(ll i = 0;i < n; i++){ 
        cin >> arr[i];
    }
    build(1 , 0, n-1);
    while(t--){
        int type;
        cin >> type;
        if(type == 2){
            int l ,r;
            cin >> l >> r;
            pi res = query(1, 0 , n-1, l , r-1);
            cout << res.first << " " << res.second << "\n";
        }else if(type == 1){
            ll idx, val;
            cin >> idx >> val;
            update(1, 0 , n-1, idx, val);
        }
    }


    return 0;
}