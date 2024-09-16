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
        int n,k;
        cin>>n>>k;
        vector<string> v(n);

        for (int i = 0; i <n; i++)
        {
           cin>>v[i];
            
        }

        for (int i = 0; i < n; i+=k)
        {
            /* code */
            for (int j = 0; j < n; j+=k)
            {
                /* code */
                cout<<v[i][j];
            }
            cout<<endl;
            
        }
        


    }
 
return 0;
}