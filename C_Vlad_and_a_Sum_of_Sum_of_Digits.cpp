#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum =0;
        int cfnt=0;

        cfnt= n/10;
        int nxt = n-10*cfnt;
        for(int i=1;i<=nxt+1;i++)
        {
            sum+=i;
        }
        sum+=cfnt*45;
        cout<<sum<<endl;


    }
 
return 0;
}