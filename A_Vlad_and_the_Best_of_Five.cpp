#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int ansA=0;
        int ansB=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                ansA++;
            }
            else
            {
                ansB++;


            }
        }
        if(ansA>ansB)
        {
            cout<<"A"<<endl;
        }
        else if(ansA<ansB)
        {
            cout<<"B"<<endl;
        }
       

    }
 
return 0;
}