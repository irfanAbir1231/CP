//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        int cnt=0;

        ll ArrA[n];
        ll ArrB[n];

        for(ll i=0;i<n;i++)
        {
            cin>>ArrA[i];
        }
        sort(ArrA,ArrA+n);

        for(ll i=0;i<n;i++)
        {
            cin>>ArrB[i];
        }
        sort(ArrB,ArrB+n);

        // for(int i=0;i<n;i++)
        // {
        //     cout<<ArrA[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<ArrB[i]<<" ";
        // }



        for(ll i=0;i<n;i++)
        {
            if(ArrA[i]==ArrB[i] or ArrA[i]+1 == ArrB[i])
            {
                cnt++;
            }

            else{
                cout<<"NO"<<endl;
                break;
            }
        }

        if(cnt==n)
        {
            cout<<"YES"<<endl;
        }
    }
 
return 0;
}