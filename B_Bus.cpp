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
        int n;
        double x;
        cin>>n>>x;
        ll sum=0,ans=0;

        vector<int>a(n);

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }

        ans = ceil(sum/x);

        cout<<max((ll)a[n-1],ans)<<endl;

    }
 
return 0;
}
