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
    
    map<pair<string,string>,vector<int>> m ;

    test{
        string fn,ln;
        int ct;

        cin>>fn>>ln>>ct;

        for (int i = 0; i < ct; i++)
        {
            /* code */
            int x;
            cin>>x;

            m[{fn,ln}].push_back(x);

        }

            for (auto &pr: m)
            {
                /* code */
                auto &full_name = pr.first;
                auto &list = pr.second;

                cout<<full_name.first<<" "<<full_name.second<<endl;
                cout<<list.size()<<endl;

                for(auto &element : list)
                {
                    cout<<element<<" ";
                }
                cout<<endl;
            }
            
        
        


    }
    

 
return 0;
}