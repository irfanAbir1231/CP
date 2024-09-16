//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e5+10;
 
signed main()
{
    Irfan
    
    int n,m;
    cin>>n>>m;

    int a[n], b[m];
    ll c[N]={0};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<(n);i++)
    {
        c[a[i]]++;
        // c[b[i]]++;
    }

    for(int i=0;i<(m);i++)
    {
        c[b[i]]++;
        // c[b[i]]++;
    }

    for(int i=0;i<100;i++)
    {
                // cout<<c[i]<<endl;


        if(c[i]==1 and i!=0){
        // cout<<i<<endl;
        cout<<i<<endl;
        }
    }
 
return 0;
}