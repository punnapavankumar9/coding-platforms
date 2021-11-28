#include <iostream>
#include <climits>
using namespace std;
const int N =1e6+2, mod = 1e9;
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
    tree[node] = max(tree[node*2], tree[node*2+1]);
    return;
}
 
void update(int node, int st, int en, int   idx, ll val){
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
    tree[node] = max(tree[node * 2], tree[node * 2 +1]);
    return ;
}
 
ll query(int node, int st, int en, int l,int r){
    if(st > r || en < l){
        return -mod;
    }
    if(l <= st && en <= r){
        return tree[node];
    }
    int mid = (st + en) / 2;
    int q1 = query(2 * node , st, mid, l , r);
    int q2 = query(2 * node + 1, mid + 1, en, l , r);
    return max(q1, q2);
}
 
signed main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
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
            int x, l;
            cin >> x >> l;
            int lo = l, hi = n-1, ans = n;
            while(lo <= hi){
                int mid = (lo + hi) / 2;
                if(query(1, 0 ,n-1, lo, mid) < x){
                    lo = mid+1;
                }else{
                    hi = mid-1;
                    ans = min(ans, mid);
                }
            }
            if(ans == n){
                cout << -1 << "\n";
            }else{
                cout << ans << "\n";
            }
        }
    }
    return 0;
}