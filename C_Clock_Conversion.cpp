//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e3+10;
 
signed main()
{
    Irfan
    
    test{
        string s;
        cin>>s;

        if(s[0]=='0' or (s[0]=='1' and (s[1]=='0' or s[1]=='1')))
        cout<<s<<" "<<"AM"<<endl;
        else if(s[0]=='1' and s[1]=='2')
        cout<<s<<" "<<"PM"<<endl;
    }
 
return 0;
}