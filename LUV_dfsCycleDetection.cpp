//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e3+10;
vector<int> g[N];

bool vis[N];

bool dfs(int vertex, int par)
{
    //vertex e entering er por action
    vis[vertex] = true;
    bool isLoopExist = false;
    for(int child : g[vertex])
    {
        //child e entering er age action
        if(vis[child] and child==par) continue;
        if(vis[child]) return true;

        isLoopExist |= dfs(child,vertex);
        // child e entering er por action
    }
    //vertex e action er age action
}
 
signed main()
{
    Irfan
    int n,m;
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        /* code */
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }

        bool isLoop = false;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            if(vis[i]) continue;
            if(dfs(i,0)){
                isLoop = true;
                break;
            }
        }

        cout<<isLoop<<endl;

        // for(auto c_cc : cc)
        // {
        //     for(int vrtx : c_cc)
        //     {
        //         cout<<vrtx<<" ";
        //     }
        //     cout<<endl;
        // }
        
    

    
    
    
    
 
return 0;
}