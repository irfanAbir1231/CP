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
        int n,r;
        cin>>n>>r;

        if(n<=r){
            cout<<((n*(n-1))/2)+1<<endl;
        }
        else{
            cout<<((r*(r+1))/2)<<endl;
        }
    }
 
return 0;
}