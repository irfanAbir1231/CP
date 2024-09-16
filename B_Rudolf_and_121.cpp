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
        int n;
        cin>>n;
        int cnt=0;

        int Arr[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>Arr[i];
        }
        sort(Arr,Arr+n);

        for(int i=0;i<n;i++)
        {
            if(Arr[i]!=1)
            {
                if(Arr[i]%2==1)
                {
                    if(Arr[i]==Arr[i+1])
                    {
                        cout<<"YES"<<endl;
                        break;
                    }
                }
            }

        }

        if(cnt==0)
        {
            cout<<"NO"<<endl;
        }

    
        



    }
 
return 0;
}