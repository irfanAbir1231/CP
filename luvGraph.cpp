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

int graph1[N][N];

vector<pair<int,int>> graph2[N];
 
signed main()
{
    Irfan
    
    int n,m;
    cin>>n>>m;
    for (int  i = 0; i < m; i++)
    {
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        graph1[v1][v2]=1;
        graph1[v2][v1]=1;

        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});


    }

    
 
return 0;
}