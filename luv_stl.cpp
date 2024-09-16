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

     vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>v[i];
    }

    int min = *min_element(v.begin(),v.end());

    cout<<min<<endl;

    int max = *max_element(v.begin(),v.end());

    cout<<max<<endl;

    int sum = accumulate(v.begin(),v.end(),0);

    cout<<sum<<endl;

    int ct = count(v.begin(),v.end(),3);

    cout<<ct<<endl;

    reverse(v.begin(),v.end());

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
 
return 0;
}