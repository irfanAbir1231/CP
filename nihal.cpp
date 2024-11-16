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
    
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int m = 2*i-1;
        for (int k = 1; k <= n-i; k++)
        {
           cout<<" ";
        }
        
       for (int j = 1; j <=m ; j++)
       {
        cout<<'*';
       }
       cout<<endl;
       
    }
    
 
return 0;
}