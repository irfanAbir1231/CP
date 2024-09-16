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

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int find;
    cin>>find;

    int lo = 0, hi = n-1;

    int mid = 0;

    while(hi - lo > 1)
    {
        mid = (lo+hi)/2;

        if(v[mid]<find) lo = mid+1;

        else hi = mid;
    }

    if(v[lo] == find) cout<<lo<<endl;

    else if(v[hi] == find) cout<<hi<<endl;

    else cout<<"NOT FOUND"<<endl;
    
 
return 0;
}