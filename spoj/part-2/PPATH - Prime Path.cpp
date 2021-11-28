#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int mx = 1e5+1;
vector<int> primes;
vector<int> arr[mx];

int dist[mx];
bool vis[mx];
bool isPrime(int n){
    for(int i = 2;i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool isValid(int a, int b){
    int cnt = 0;
    while(a > 0){
        if(a % 10 != b % 10) cnt++;
        a /= 10;
        b /= 10;
    }
    return cnt == 1 ? true: false;
}

void generateg(){
    for(int i = 1000;i <= 9999; i++){
        if(isPrime(i)) primes.push_back(i);
    }

    int n = primes.size();
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int a, b;
            a = primes[i];
            b = primes[j];
            if(isValid(a, b)){
                arr[a].push_back(b);
                arr[b].push_back(a);
            }
        }
    }
}

void bfs(int a){
    vis[a] = true;
    dist[a] = 0;
    queue<int> q;
    q.push(a);
    while(q.size()){
        int curr = q.front();
        q.pop();
        for(int ch : arr[curr]){
            if(!vis[ch]){
                vis[ch] = true;
                dist[ch] = 1 + dist[curr];
                q.push(ch);
            }
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(false);cout.tie(0);
    int t;
    cin >> t;
    generateg();
    while(t--){
        int a,b;
        cin >> a >> b;
        for(int i = 1000; i <= 9999; i++){
            vis[i] = 0;
            dist[i] = -1;
        }
        bfs(a);
        if(dist[a] == -1){
            cout << "Impossible\n";
        }else{
            cout << dist[b] << "\n";
        }
    }
    
    return 0;
}