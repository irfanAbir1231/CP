#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
 
int t;
cin>>t;

while (t--)
{
    /* code */
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    sort(a,a+n);
    a[0]+=1;
    ll ans=1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        ans*=a[i];
    }
    cout<<ans<<endl;
    
    
}

 
return 0;
}