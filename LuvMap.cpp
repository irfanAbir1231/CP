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

void print(map<int,string> &m)
{
    cout<<"size: "<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
 
signed main()
{
    Irfan
    
    map<int,string> m;
    m[1] = "abc";

    m[5] = "cdc";

    m[3] = "acd";

    m[5] = "kkk" ;

    m.insert({4,"abc"});

    // for(auto it=m.begin(); it!=m.end();it++)
    // {
    //     cout<<(*it).first << " " << (*it).second<<endl;
    // }
    // m[6] = 4;

    auto it = m.find(5);

    // if(it == m.end())
    // cout<<"no val"<<endl;
    // else
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    //     cout<<endl;
    // }

    print(m);

    // for(auto &it :m)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
 
return 0;
}