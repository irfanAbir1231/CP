//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test ll t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const ll N = 1e5+10;
 
signed main()
{
    Irfan
    
    test{
        ll n,k;
        cin>>n>>k;

        ll start = n-k+1;
        ll end = n;
        ll length = end - start + 1;

        if(start%2==0)
        {
            if((length/2)%2 ==0 or length==1)cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(length>1 and ((length+1)/2)%2 ==0)cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }

        }
    }
 
return 0;
}