#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
 
ll t;
cin>>t;
while(t--)
{
    char a[11][11];
    for (ll i = 1; i <= 10; i++)
    {
        /* code */
        for (ll j = 1; j <= 10; j++)
        {
            /* code */
            cin>>a[i][j];
        }
        
    }
    ll k=0;
    for (ll i = 1; i <=10; i++)
    {
        /* code */
        for (ll j = 1; j <=10; j++)
        {
            /* code */
            if (a[i][j]=='X')
            {
                /* code */
                if(i<=5)
                {
                    if(j<=5)
                    k+=min(i,j);
                    else
                    k+=min(i,11-j);
                }
                else
                {
                    if(j<=5)
                    k+=min(11-i,j);
                    else
                    k+=min(11-i,11-j);
                }

            }
            
        }
        
    }
    cout<<k<<endl;
    
}
 
return 0;
}