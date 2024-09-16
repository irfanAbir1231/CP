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

// bool should_i_swap(auto a, auto b)
// {
//     if(a>b) return true;

//     return false;

// }

bool should_i_swap(pair<int,int>a,pair<int,int>b)
{
    if(a.first!= b.first)
    {
         return a.first< b.first;
        
    }
    else{
        return a.second>b.second;
        
    }

}
 
signed main()
{
    Irfan
    
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end(),should_i_swap);
    

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i].first<<" "<<a[i].second;
        cout<<endl;
    }
    


    
 
return 0;
}