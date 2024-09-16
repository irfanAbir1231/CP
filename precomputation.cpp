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

    
        int n;
        cin>>n;

        int arr[n];
        int count[n] ={};


        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            count[arr[i]]++;
        }

        test{
            int m;
            cin>>m;

            cout<<count[m]<<endl;
        }
        
    
    
    
 
return 0;
}