#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        map<int,int>mp1,mp2;

        for (int i = 0; i < l; i++)
        {
            /* code */
            int x;
            cin>>x;
            mp1[x]++;
        }

        for (int i = 0; i < r; i++)
        {
            /* code */
            int x;
            cin>>x;
            mp2[x]++;
        }

        int ans=0;
        int left=0;
        int right=0;

        for(auto it: mp1)
        {
            int x=it.first;
            int y=it.second;
            int z=mp2[x];

            int mn;
            mn=min(y,z);
            mp2[x]-=mn;
            mp1[x]-=mn;
            if (mp2[x]==0) mp2.erase(x);
            left+=mp1[x];
            
        }
        for(auto it:mp2)
        {
            right+=it.second;
        }
        if(left==right)ans=left;
        else if(left>right)
        {
            int dif=left-right;
            ans+=right;
            for(auto it:mp1)
            {
                int x=it.first;
                int y=it.second;
                if(y==1 || y==0)continue;
                else{
                    if(y>=dif)
                    {
                        ans+=dif/2;
                        dif=0;
                        break;
                    }
                    else{
                        int zo=y/2;
                        dif-=zo*2;
                        ans+=zo;
                    }
                }
            }
            if(dif!=0)
            {
                ans+=dif;
            }
        }
        else{
            int dif=right-left;
            ans+=left;
            for(auto it:mp2)
            {
                int x=it.first;
                int y=it.second;
                if(y==0 || y==1)continue;
                else{
                    if(y>=dif)
                    {
                        ans+=dif/2;
                        dif=0;
                        break;
                    }
                    else{
                        int zo=y/2;
                        dif-=zo*2;
                        ans+=zo;
                    }
                }
            }
            if(dif!=0)ans+=dif;
        }
        cout<<ans<<endl;
        
        
    }
}