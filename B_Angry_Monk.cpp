//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e5+10;
 
signed main()
{
    Irfan
    
    test{

        int n,k;
        cin>>k>>n;

        int a[N];

        for (int i = 1; i <= n; i++)
        {
            /* code */
            cin>>a[i];
        }

        sort(a+1,a+1+n);

        int ans = k - a[n];

        for(int i=1;i<n;i++)
        {
            ans+= (a[i]-1);
        }
        cout<<ans<<endl;
        
    }
 
return 0;
}