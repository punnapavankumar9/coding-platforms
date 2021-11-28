#include <iostream>

using namespace std;
const int N= 1e6+2;
int tree[4 * N];
int arr[N];

void build(int node, int st, int en){
    if(st == en){
        tree[node] = arr[st];
        return;
    }
    int mid = (st + en)/2;
    build(node*2, st, mid);
    build(node*2 + 1, mid + 1, en);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
    return;
}

void update(int node, int st, int en, int idx){
    if(st == en){
        if(arr[st] == 0){
            arr[st] = 1;
            tree[node] = 1;
        }else{
            arr[st] = 0;
            tree[node] = 0;
        }
        return;
    }
    int mid = (st + en) /2;;
    if(idx <= mid){
        update(2 * node, st, mid, idx);
    }else{
        update(2 * node + 1, mid+1, en, idx);
    }
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
    return;
}

int query(int node, int st, int en, int k){
    if(st == en){
        return st;
    }
    int mid = (st + en) / 2;
    if(k < tree[2 * node]){
        return query(2 * node , st, mid, k);
    }else{
        return query(2* node  + 1, mid+1, en, k-tree[2 * node]);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <n ;i++) cin >> arr[i];
    build(1, 0 ,n-1);
    while(m--){
        int type;
        cin >> type;
        if(type == 1){
            int idx, val;
            cin >> idx;
            update(1,0,n-1, idx);
        }else if(type == 2){
            int k;
            cin >> k;
            cout << query(1, 0, n-1, k) << "\n";
        }
    }
    return 0;
}