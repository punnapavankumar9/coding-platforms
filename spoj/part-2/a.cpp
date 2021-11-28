#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
using namespace std;
const int mx = 1e5+1;
const int n = 10000;
vector<int> ar[mx];
vector<int> primes;
int dist[n];
bool vis[n];


    bool isPrime(int x){
        for(int i = 2; i * i <= x; i++){
            if(x % i == 0) return false;
        }
        return true;
    }
bool isValid(int a, int b){
    int cnt = 0;
    while (a > 0)   
    {
        if(a % 10 != b% 10) cnt++;
        a /= 10;
        b /= 10;
    }
    return cnt == 1? true : false;
}
void generatep(){
    for(int i = 1000; i < n; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    int x = primes.size();
    for(int i = 0; i < x; i++){
        for(int j = i + 1; j < x; j++){
            int a = primes[i];
            int b= primes[j];
            if(isValid(a, b)){
                ar[a].push_back(b);
                ar[b].push_back(a);
            }
        }
    }
}

void bfs(int a){
    vis[a] = true;
    dist[a] = 0;
    queue<int> q;
    q.push(a);
    while (!q.empty()){
        int curr = q.front();
        q.pop();
        for(int ch : ar[curr]){
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
    generatep();
    while(t--){
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < n; i++){
            dist[i] = -1;
            vis[i] = false;
        }
        bfs(a);
        if(dist[b] == -1){
            cout << "Impossible\n";
        }else{
            cout << dist[b] << "\n";
        }
    }
    
    return 0;
}