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

int arr[N];
 
signed main()
{
    Irfan
    
    int n,m;
    cin>>n>>m;

    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        arr[a]+=c;
        arr[b+1]-=c;

        // for (int i = a; i <=b; i++)
        // {
        //     /* code */
        //     arr[i]+=c;
        // }
        
    }

    for (int i = 1; i <= n; i++)
    {
        /* code */
        arr[i]+=arr[i-1];
    }
    
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int max = -1;

    for (int i = 1; i <=n; i++)
    {
        /* code */
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    
    cout<<max<<endl;
 
return 0;
}