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
        ll n,k;
        cin>>n>>k;

        ll ans = 0,sum=0;
        ll max=0,min=0;
        
        vector<ll>arr(n+10);
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            sum+=arr[i];
        }

        max = sum+k;
        min =sum;

        
        sort(arr.begin(),arr.end());

        for (ll gL = 1; gL <= n; gL++)
        {
            cnt = max/gL;
            if(cnt<arr.back())continue;
            else if(cnt*gL<min)continue;
            else {
                 ans = gL;
            }

        }
        cout<<ans<<endl;
        
    }
    
 
return 0;
}