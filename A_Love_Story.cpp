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
    
    string s = "codeforces";

    test{
        string s2;
        cin>>s2;
        int cnt = 0;

        for(int i=0;i<10;i++)
        {
            if(s[i]!=s2[i])
            cnt++;

        }

        cout<<cnt<<endl;
    
    }
 
return 0;
}