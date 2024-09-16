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
    
    test{
        int n;
        cin>>n;
        int cnt =0;

        int a[n];
        int b[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                a[n-1]=b[i];
                sort(a,a+n);
                cnt++;
            }
            else{
                continue;
            }
        }
        cout<<cnt<<endl;
    }
 
return 0;
}