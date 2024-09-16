//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; while(t--)
typedef long long ll;
 
signed main()
{
    Irfan
    
    set <int> s;
    int arr[] = {1,2,3,4,5,6,7,6,5,4,33,22,4,5,67,7,5,4,4,44,3,4};
    int n = 22;

    for(int i=0;i<n;i++) s.insert(arr[i]);
    int sz = s.size();
    cout<<sz<<endl;
    set <int> :: iterator it;
    for(it = s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    s.erase(4);
    for(it = s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }

 
return 0;
}