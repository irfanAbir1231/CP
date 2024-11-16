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
        int n;
        cin>>n;
    
        int arr[n];
        int flg=0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            if(abs(arr[i]-arr[i+1])==7 and abs(arr[i]-arr[i+1])==5){
            cout<<"YES"<<endl;
            flg=1;
            break;
            }
        }
        if(flg==0)cout<<"NO"<<endl;
        
        
        

    }
 
return 0;
}