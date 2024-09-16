//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; while(t--)
typedef long long ll;
 
signed main()
{
    Irfan
    
    test{
        int n;
        cin>>n;

        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<0) x=-x;

            mp[x]++;
        }
        int ans=0;

        for(auto it: mp)
        {
            if(it.first==0) ans+=1;
            else if(it.second>=2) ans+=2;
            else ans+=1;

        }
        cout<<ans<<endl;
    }
 
return 0;
}