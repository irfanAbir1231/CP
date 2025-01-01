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

void dfs(int u){
    vis[u]=true;
    for(auto v: g[u]){//graph er 1th index e jotogula node ase shbgulay traverese korbo
        if(!vis[v]){ //kono node jodi visited array te na thake
            dfs(v);//oitate dfs korbo, r jodi child node hoy tahole oi node k vis korei theme jabe
        }
    }
}

int connected_component(){
    int cc=0;
    for (int u = 1; u <= n; u++)
    {
        if(!vis[u]){
            dfs(u);
            cc++;
        }
    }
    return cc;
    
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