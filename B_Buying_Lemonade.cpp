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
        int press = 0;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
        }

        sort(v.begin(),v.end());

        while(k>press && !v.empty())
        {
        for (int i =0; i < v.size(); i++)
        {
            v[i]--;
            press++;
            if(v[i]==-1)
            {
                v.erase(v.begin()+i);
                i--;
            }

            if (press >= k) {
                break;
                }
            
            }
        }
        
        cout<<press<<endl;
        

    }
 
return 0;
}