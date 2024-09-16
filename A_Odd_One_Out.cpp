#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a!=b and a!=c)
        {
            cout<<a<<endl;
        }
        else if(b!=a and b!=c)
        {
            cout<<b<<endl;
        }
        else if(c!=a and c!=b)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }
 
return 0;
}