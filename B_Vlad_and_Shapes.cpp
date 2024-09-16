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
        vector<string> s(n);

        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }        

        vector<int> cnt(n,0);
       
       

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            
                {
                    if(s[i][j]=='1') 
                    cnt[i]++;
                }
            
        }

        // for(int i=0;i<n;i++)
        // {
        //     cout<<cnt[i]<<" ";
        // }
        // cout<<endl;

        

        bool isSquare = false;
        for(int i=0;i<n-1;i++)
        {
            if(cnt[i] && cnt[i]==cnt[i+1])
            {
                isSquare = true;
                break;
            }
        }

       

        if(isSquare)
        {
            cout<<"SQUARE"<<endl;
        }
     
        else
        {
            cout<<"TRIANGLE"<<endl;
        }


     }
 
return 0;
}