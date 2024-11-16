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
        int haveM, minReq;
        cin>>haveM>>minReq;
        int flg=0;

        if(minReq <= haveM)
        cout<<haveM<<endl;

        else{
            int remain = minReq - haveM;
            if(haveM-remain>0)cout<<haveM-remain<<endl;
            else{
                cout<<"0"<<endl;
            }
        }
    }
 
return 0;
}