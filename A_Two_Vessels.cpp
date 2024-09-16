#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long a,b,c;
    cin>>a>>b>>c;
    if (a==b)
    {
        /* code */
        cout<<0<<endl;
    }
    else if (a>=b)
    {
        /* code */
        long long cnt = 0;
        while(a>b)
        {       
        a-=c;
        b+=c;
        cnt++;
        if(a<=b)
        break;
        }
        cout<<cnt<<endl;
    }
    else 
    {
        long long cnt = 0;
        while (b>a)
        {
            /* code */
            b-=c;
            a+=c;
            cnt++;
            if(b<=a)
            break;
        }
        cout<<cnt<<endl;
        
    }
    
    }

}