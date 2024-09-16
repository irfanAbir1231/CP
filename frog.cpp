//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e3+10;
 
signed main()
{
    Irfan
    
    int n;
    cin>>n;
    int a[n];
    bool v=true;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(a[1]!=1) v=false;

    for(int i=2;i+2<n;i++)
    {
        int k = a[i]-a[i-1];
        int x = a[i-1]-a[i-2];

        if(x==k or x==k+1 or x==k-1)
            continue;

        else{
            v=false;
        }    
    }

    cout<<v<<endl;
 
return 0;
}