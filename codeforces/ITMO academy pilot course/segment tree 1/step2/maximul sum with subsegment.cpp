#include <iostream>

using namespace std;
typedef long long ll;
const int N = 1e6+2;
struct hell{
    ll sum , suff, pref, ans;
};

ll arr[N];
hell tree[4 * N];

hell make_hell(ll val){
    hell res;
    res.sum = val;
    res.suff = res.pref = res.ans = (val > 0 ? val : 0);
    return res;
}

hell combine(hell l, hell r){
    hell res;
    res.sum = l.sum + r.sum;
    res.pref = max(l.pref, r.pref + l.sum);
    res.suff = max(r.suff, l.suff + r.sum);
    res.ans = max(max(l.ans, r.ans), l.suff + r.pref);
    return res;
}

void build(int node, int st, int en){
    if(st == en){
        tree[node] = make_hell(arr[st]);
        return;
    }
    int mid = (st + en)/2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    tree[node] = combine(tree[node * 2], tree[node * 2+1]);
    return;
}

void update(int node, int st, int en, int idx ,ll val){
    if(st == en){
        arr[st] = val;
        tree[node] = make_hell(val);
        return;
    }
    int mid = (st + en)/2;
    if(idx <= mid) update(2*node, st, mid, idx, val);
    else update(2*node+1, mid+1, en, idx, val);
    tree[node] = combine(tree[node *2], tree[node * 2 + 1]);
    return;
}

hell query(int node, int st, int en, int l , int r){
    if(st > r || en < l){
        return make_hell(0);
    }
    if(st >= l && en <= r){
        return tree[node];
    }
    int mid = (st + en) / 2;
    hell q1 = query(2 * node,st , mid, l, r);
    hell q2 = query(2 * node + 1, mid +1, en, l, r);
    return combine(q1,q2);
}

void solve(int n){
    hell res = query(1, 0 ,n-1, 0 ,n-1);
    ll ans = max(max(res.suff, res.pref),max(res.ans, res.sum));
    cout << (ll)ans << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int n , m;
    cin >> n >> m;
    for(int i =0; i< n;i++) cin >> arr[i];
    build(1,0,n-1);
    solve(n);
    while(m--){
        ll idx, val;
        cin >> idx >> val;
        update(1,0,n-1, idx, val);
        solve(n);
    }
    
    return 0;
}