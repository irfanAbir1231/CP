//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e5+10;
 
signed main()
{
    Irfan
    
    test{
        ll n,k;
        cin>>n>>k;

        if(n%2==0)
        {
            if(k==1 or k%3==0 or (k>2 and k%2==0))
            cout<<"YES"<<endl;

            else{
                cout<<"NO"<<endl;
            }

        }

        else{

            if(k%3==0 or (k>=4 and k%2==0))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
 
return 0;
}