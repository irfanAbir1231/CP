//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test ll t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const ll N = 1e5+10;
 
signed main()
{
    Irfan
    
    test{
        int n,r;
        cin>>n>>r;
        int ans=0;
        int rem=0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;

            r-=x/2;
            ans += (x/2)*2;
            rem+=x%2;

        }
        cout<<ans+min(rem,2*r-rem)<<endl;
        
    }
 
return 0;
}
