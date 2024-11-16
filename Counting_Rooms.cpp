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

int n,m,rooms;

vector<vector<bool>> vis; //grid er konta knta visited nd kothey jawa jabe na
vector<pair<int,int>> moves = {{-1,0},{1,0},{0,-1},{0,1}};

bool isValid(int x, int y){

    if(x<0 or x>=n or y<0 or y>=m) return false;
    
    if(vis[x][y]) return false;

    return true;

}

void dfs(int i, int j){
    vis[i][j] = true;

    for(auto p: moves){
        if(isValid(i+p.first,j+p.second)){
            dfs( i+p.first,j+p.second );
        }
    }
}

void connected_components(){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        if(!vis[i][j]){
            dfs(i,j);
            rooms++;
        }
       }
       
    }
    
}


void solve() {

    cin >> n >> m;
	vis.resize(n);
 
	for(int i = 0; i < n; ++i)
	{
		vis[i].resize(m);
	}
    
    for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char c; cin >> c;
			if(c == '#')
			{
				vis[i][j] = true;
			}
		}
	}
    connected_components();

    cout<<rooms<<endl;


}
 
 
 
 
signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}