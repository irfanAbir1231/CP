#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int d[n],s[n],rz=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>d[i]>>s[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i]>=3)
            {
                /* code */
                if (s[i]%2==1)
                {
                    /* code */
                    rz=min(rz,d[i]+s[i]/2);

                }
                else{
                    rz=min(rz,d[i]+(s[i]/2-1));
                }
                
            }
            else
            {
                rz = min(rz,d[i]);
            }
            
        }
        cout<<rz<<endl;
        
        
    }
    return 0;
    
}