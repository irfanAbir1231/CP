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
    
    string s;
    cin>>s;
    int n = s.length();
    int cnt =0;

    for(int i = 0; i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        cnt++;

    }
    cout<<cnt<<endl;
 
return 0;
}