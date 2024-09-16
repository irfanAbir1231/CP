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
    
    int n,a,b;
    cin>>n>>a>>b;
    int row=n*a, col=n*b;
    int cnt=0;
    string s1=".", s2="#";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col; j++)
        {
            cout<<s1;
            cnt++;
            if(cnt==b){
                cnt=0;
                for(int k=0;k<col;k++)
                {
                    cout<<s2;
                    cnt++;
                    
                }

            }

            
        }
        cout<<endl;
        if((i+1)%a==0)swap(s1,s2);
    }
 
return 0;
}