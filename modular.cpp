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
    
    int n;
    cin>>n;
    ll fact = 1;
    int M=47;

    for(ll i=2;i<=n;i++)
    {
        fact = (fact*i)%M;
    }
    cout<<fact<<endl;
 
return 0;
}