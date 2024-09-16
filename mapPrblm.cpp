//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology

//n ta string ase , unq string gula print korte hbe with lexographical order
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

    map<string, int> m;

    int n;
    cin>>n;

    for (int  i = 0; i < n; i++)
    {
        /* code */
        string s;
        cin>>s;

        m[s]++;
    }

    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
    
    
 
return 0;
}