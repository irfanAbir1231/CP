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
        string s;
        cin>>n;
        cin>>s;
        int cnt=0;
        int ans=0;

        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]){
                cnt++;
                if(cnt==1)
                i+=2;
                ans++;
                cnt=0;
            }
            else{
                continue;
            }
        }
        if(s[0]==s[n-1] and n!=1 and n%2!=0)ans++;
        cout<<ans<<endl;
    }
 
return 0;
}