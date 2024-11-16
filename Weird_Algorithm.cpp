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
    
    ll n;
    cin>>n;

    cout<<n<<" ";

    while(n!=1)
    {
        if(n%2!=0){
            n=n*3+1;
            cout<<n<<" ";
        }
        else{
            n=n/2;
            cout<<n<<" ";

        }
    }
 
return 0;
}