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
    
    test{
        int n;
        cin>>n;
        int v[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>v[i][j];
            }
            
        }

        int ans =0;
        for (int i = 0; i < n; i++)
        {
            int mn=0;
            for (int j = 0; j < n-i; j++)
            {
                mn = min(mn,v[i+j][j]);
            }
            if(mn<0)ans+=abs(mn);
            
        }

        for (int j = 1; j < n; j++)
        {
            int mn=0;
            for (int i = 0; i < n-j; i++)
            {
                mn = min(mn,v[i][j+i]);
            }
            if(mn<0)ans+=abs(mn);
            
        }
        cout<<ans<<endl;
        
        
    }
 
return 0;
}