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

void print (multiset<string> &s)
{
    for(auto &sd : s)
    {
        cout<<sd<<endl;
    }

    // for(auto it = s.begin(); it!=s.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
}
 
signed main()
{
    Irfan
    
    multiset<string> s;
    s.insert("abc");
    s.insert("abc");
    s.insert("nkm");

    auto it = s.find("abc");

    if(it!=s.end())
    {
        s.erase(it);
    }
    else{
        cout<<"index not found"<<endl;
    }

    print(s);

 
return 0;
}