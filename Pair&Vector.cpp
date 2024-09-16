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

void printVc(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
 
signed main()
{
    Irfan
    
   int n;
   cin>>n;

   vector<vector<int>> v;


   for (int i = 0; i < n; i++)
   {
        int s;
        cin>>s;
        vector<int> tmp;
    /* code */
    for (int j = 0; j < s; j++)
   {
        int x;
        cin>>x;
        tmp.push_back(x);
   }
   v.push_back(tmp);
   }

   v[0].push_back(10);
   v.push_back(vector<int> ());
   

   for (int i = 0; i < v.size(); i++)
   {
    /* code */
    printVc(v[i]);
   }

//    cout<<v[0][1];
   
   
 
return 0;
}