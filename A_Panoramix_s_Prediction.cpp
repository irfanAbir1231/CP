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
    
    int a,b;
    cin>>a>>b;

    int ans=0;

    if((a==2 and b==3) or (a==3 and b==5) or (a==5 and b==7) )
    {
            cout<<"YES"<<endl;
    }
    else{

    for(int i=a+1;i<N;i++)
    {
        if(i%2==0 or i%3==0 or i%5==0 )
        {
            continue;
        }
        else{
            ans = i;
            break;
        }
    }
        if(ans==b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    
 
return 0;
}