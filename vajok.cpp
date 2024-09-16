#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{
    int T;
    cin>>T;
    for(ll j=0;j<T;j++)
    {
        /* code */
        int n;
        cin>>n;
        cout<<"Case "<<j+1<<":";
        
        for (ll i = 1; i <= n; i++)
        {
            /* code */
            if(n%i==0)
            {
            cout<<i;
            
            if (i!=n)
            {
                /* code */
                cout<<" ";
            }
            }
            
        }
        cout<<endl;
        
    }
    
}