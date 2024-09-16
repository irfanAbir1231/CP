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

        multiset<ll> bags;

        for(int i=0;i<n;i++)
        {
            int cnd;
            cin>>cnd;

            bags.insert(cnd);
        }

        ll total_candies = 0;

        for (int i = 0; i < k; i++)
        {
            /* code */
            auto last_it = --bags.end();
            int candy = *last_it;
            total_candies+=candy;
            bags.erase(last_it);
            bags.insert(candy/2);

        }

        cout<<total_candies<<endl;
        

        
    }
 
return 0;
}