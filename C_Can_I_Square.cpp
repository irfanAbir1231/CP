#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,sum =0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            sum+=x;
        }
        ll root = sqrt(sum);
        if(root*root==sum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 
return 0;
}