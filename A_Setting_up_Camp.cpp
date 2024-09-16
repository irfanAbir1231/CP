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
        ll a,b,c;
        cin>>a>>b>>c;

        if((3-b%3)>c and b%3!=0)
        {
            cout<<"-1"<<endl;
        }

        else{
            ll bc = ceil(1.0*(b+c)/3);
           cout<< a+ bc<<endl;
        }
    }
 
return 0;
}