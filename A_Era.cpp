//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll arr[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        ll ans = arr[0]-1;
        ll ind = ans+1;

        for(int i=1;i<n;i++)
        {
            if(i+ind<arr[i])
            {
                ll x = arr[i] - (i+ind);
                ind += x;
                ans +=x;
            }
        }
            cout<<ans<<endl;

    }

 
return 0;
}