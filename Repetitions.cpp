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
    
    string s;
    cin>>s;
    int cnt=1;
    int Max=0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        Max=max(cnt,Max);
    }
    cout<<Max<<endl;
    
 
return 0;
}