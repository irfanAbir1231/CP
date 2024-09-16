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
        int n;
        cin>>n;
        vector<string> a;

        string s;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>s;
            a.push_back(s);
        }

        for (int i = n-1; i >= 0; i--)
        {
            /* code */
            string b = a[i];
            for (int i = 0; i < 4; i++)
            {
                /* code */
                if(b[i]=='#')
                cout<<i+1<<" ";
            }
            
        }
        cout<<endl;
        
        
    }
 
return 0;
}