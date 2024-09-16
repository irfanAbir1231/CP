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
    
    int n;
    cin>>n;

    int arr[n];
    int pr[n];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        pr[i] = pr[i-1] + arr[i];
    }

    test{
        int l,m;
        cin>>l>>m;
        int sum = 0;

        // for(int i=l;i<=m;i++)
        // {
        //     sum+=arr[i];

        // }

        sum = pr[m] - pr[l-1];

        cout<<sum<<endl;


    }
 
return 0;
}