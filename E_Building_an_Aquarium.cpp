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
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for (ll  i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    ll l=1, r=INT_MAX;
    ll ans=INT_MAX;
    while (l<=r)
    {
        /* code */
        ll mid =(r-l)/2+l;
        ll res = 0;
        for (ll &i: a)
        {
            /* code */
            if(mid>i)
            {
                res += (mid-i);
            }
        }
        if(res<=x)
        {
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        
    }
    cout<<ans<<endl;
    
    
}

 
return 0;
}