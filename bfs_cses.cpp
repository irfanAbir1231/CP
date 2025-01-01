// Irfan Hakim Bhuiyan
// SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define nl cout << endl;
#define vec_print(v) for(auto i : v) cout << i << " "; nl;
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

vector<vector<int>> g; //adjacency list
    int n,m;
    vector<bool>vis;
    vector<int>dist;

void bfs(int u){
    queue<int> bfs_q;
    bfs_q.push(u); //1st e node ta k queue te dhukabo
    dist[u] = 0;
    vis[u] = true;

    while (!bfs_q.empty())
    {
        u = bfs_q.front();
        bfs_q.pop(); // u te q er first node ta niye nilam r q theke eta pop korlam

        for(auto v: g[u]){//graph er 1st index(node) er sth jotogula node connected ase shbgula te v
            if(!vis[v]){ //oi node gula jodi visited na hoy
                bfs_q.push(v); // bfs_q te dhukabo
                vis[v] = true;
                dist[v] = dist[u]+1;
            }
        }
    }
    
    
    
}

void solve() {
    
}
 
 
 
 
signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}