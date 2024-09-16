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
    
    vector<int> v = {9,2,3,4,5,6};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     /* code */
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // vector<int> :: iterator it = v.begin();

    // for (auto it = v.begin(); it!=v.end();it++)
    // {
    //     /* code */
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4}};
    // vector<pair<int,int>> :: iterator it;

    for(auto it = vp.begin(); it!=vp.end();it++)
    {
        cout<<(*it).first<<" "<<it->second<<endl;
    }

    // for(int &val: v)
    // {
    //     val++;
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // for(int val: v)
    // {
    //     // val++;
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // for(auto val: vp){
        
    //     cout<<val.first<<" "<<val.second<<endl;

    // }

    
 
return 0;
}