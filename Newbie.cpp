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
    
    int n,ux,ex;
    int m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>ux;
    ex=n-ux;

    if(arr[ux-1]*2<arr[n-1])
    {
        cout<<arr[n-1]<<endl;
    }
    else{
        cout<<arr[ux-1]*2<<endl;
    }
    
 
return 0;
}