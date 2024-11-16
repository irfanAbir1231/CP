// //irfan Hakim Bhuiyan
// //SWE, Islamic University Of Technology
// #include<bits/stdc++.h>
// using namespace std;
// #define MAX 1000000
// #define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
// #define sqr(x) ((x) * (x))
// #define test int t; cin >> t; cin.ignore();  while(t--)
// typedef long long ll;
// const int N = 1e5+10;
 
// signed main()
// {
//     Irfan
    
//     int n;
//     cin>>n;

//     vector<int> div;
//     int x=sqrt(n);

//     for (int i = 0; i <x; i++)
//     {
//         if(n%i==0){
//         div.push_back(i);
//         div.push_back(n/i);
//         }

//     }
    
 
// return 0;
// }

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
        int cnt=0;
        int root_n = sqrt(n);
 
        for (int i = 1; i <= root_n; i++)
        {
            if(n%i==0)cnt++;
        }
        if(n == (root_n*root_n))
        cout<<cnt*2-1<<endl;
 
        else{
            cout<<cnt*2<<endl;
        }
        
    }
 
return 0;
}