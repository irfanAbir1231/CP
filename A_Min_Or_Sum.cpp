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

    while(t--)
    {
        int n;
        cin>>n;
        int x,ans=0;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            ans = (ans|x);

        }
        cout<<ans<<endl;
    }
    
return 0;
}