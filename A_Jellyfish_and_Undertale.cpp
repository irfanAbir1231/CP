#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v(n);
        for(ll i=0; i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll rslt = 0;
        rslt =b;
        for (ll i = 0; i < n; i++)
        {
            /* code */
            rslt+= min(a,v[i]+1)-1;
        }
        cout<<rslt<<endl;
        
    }
    
}