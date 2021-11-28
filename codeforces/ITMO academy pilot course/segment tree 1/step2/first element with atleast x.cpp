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
 
ll query(int node, int st, int en, int x){
    if(st == en){
        if(x <= arr[st]) return st;
        else return -1;
    }
    int mid = (st + en) / 2;
    if(tree[2 *node] >= x) return query(node * 2, st, mid,x);
    else return query(node * 2 + 1, mid + 1, en, x);
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
            int x;
            cin >> x;
            cout << (ll)query(1,0,n-1,x) << "\n";
        }
    }
    return 0;
}