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
    
    test{
        int x,y,k;
        cin>>x>>y>>k;

        int flg = 0;
        int c=0;
        int prAns, ans;

        if(y>=x) c = y;

        else{
            c=x;
            flg=1;
        }

        if(c%k!=0)
        {
            prAns = (c/k)+1;
        }
        else{
            prAns = c/k;
        }

        ans = prAns*2;

        if(flg==1)cout<<ans-1<<endl;
        else{
            cout<<ans<<endl;
        }

    }
 
return 0;
}