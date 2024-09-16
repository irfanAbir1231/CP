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
    
    map<int,multiset<string>>marks_map;

    test{
        int marks;
        string name;

        cin>>name>>marks;
        marks_map[marks].insert(name);
    }

    auto last_it = --marks_map.end();

    while(true)
    {
        auto &students = (*last_it).second;
        auto &marks = (*last_it).first;

        for(auto student: students)
        {
            cout<<student<<" "<<marks<<endl;
        }

        if(last_it == marks_map.begin()) break;
        last_it--;
    }


 
return 0;
}