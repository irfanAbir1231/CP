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
        int n;
        cin>>n;

        string s;
        cin>>s;
        int cnt =0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
            cnt++;
            
        }

        if(cnt%2!=0)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
 
return 0;
}