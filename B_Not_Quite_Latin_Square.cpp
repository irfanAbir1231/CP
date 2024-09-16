#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        for (int i = 0; i < 3; i++)
        {
            /* code */
            string s;
            cin>>s;
            int a=0,b=0,c=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='A')
                {
                    a=1;
                }
                else if(s[i]=='B')
                {
                    b=1;
                }
                else if(s[i]=='C')
                {
                    c=1;
                }
            }
            if(a==0)
            {
                cout<<"A"<<endl;
            }
            else if(b==0)
            {
                cout<<"B"<<endl;
            }
            else if(c==0)
            {
                cout<<"C"<<endl;
            }
        }
        
    }
 
return 0;
}