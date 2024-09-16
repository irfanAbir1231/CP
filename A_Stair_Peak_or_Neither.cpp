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
        int a,b,c;
        cin>>a>>b>>c;

        if(a<b and b<c)cout<<"STAIR"<<endl;
        else if(a<b and b>c)cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
 
return 0;
}