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

int digit_sum(int n)
{
    if(n==0) return 0;

    return digit_sum(n/10) + n%10;
}
 
signed main()
{
    Irfan
    int n;
    cin>>n;
    
    cout<<digit_sum(n)<<endl;
    

    
    
 
return 0;
}