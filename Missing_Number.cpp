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
    n--;
    int flg=0;
    

    // int arr[n+10] = {0};
    vector <int> arr(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    
    
    sort(arr.begin(),arr.end());

    for (int i = 1; i <= n; i++) {
        if(arr[i]!=i) {
            cout<<i<<endl;
            flg=1;
            break;
        }
        
    }
    if(flg==0)cout<<n+1<<endl;
    
}