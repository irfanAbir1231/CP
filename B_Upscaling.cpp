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
        int cnt=0;
        string s1="#";
        string s2=".";

        for(int i=0;i<n*2;i++)
        {
            for(int j=0;j<n*2;j++)
            {
                cout<<s1;
                cnt++;
                if(cnt==2){
                    cnt=0;
                    swap(s1,s2);
                }
            }
            cout<<endl;
            if(n%2 !=0) swap(s1,s2);
            if((i+1)%2==0) swap(s1,s2);
        }
    }
 
return 0;
}