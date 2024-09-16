#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n,0);
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int i=0, j=n-1, k=1,  l=n-2;

        cout<< abs(v[i]-v[j]) + abs(v[j]-v[k]) + abs(v[k]-v[l]) + abs(v[l]-v[i]) <<endl;
    }
 
return 0;
}