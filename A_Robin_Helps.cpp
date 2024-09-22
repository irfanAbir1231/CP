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
        cin>>n>>k;

        int a[n+1];
        int cnt=0;
        int robin=0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(a[i]>=k)
            robin+=a[i];

            else if(a[i]==0 and robin>0)
            {
                cnt++;
                robin--;
            }
        }
        cout<<cnt<<endl;
        
        
    }
 
return 0;
}