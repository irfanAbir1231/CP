//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e3+10;
 
signed main()
{
    Irfan
    
    test{
        ll n,g,b;
        cin>>n>>g>>b;

        ll half = (n+1)/2;

        if(n<=g){
            cout<<n<<endl;
        }
        else{
            ll ans = 0;

            for(ll i=0;i<=n;i++)
            {
                ans = g*i ;
                if(ans>=half){
                    cout<<max(n,ans+(i-1)*b)<<endl;
                    break;
            }

        }

        }
    }


    
 
return 0;
}