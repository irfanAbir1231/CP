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

int bana(int a, int b, int c)
{
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(a<=b and a<=c)a++;
        else if(b<=a and b<=c)b++;
        else c++;
    }

    return a*b*c;
    
}
 
signed main()
{
    Irfan
    
    
        test{
            int a,b,c;
            cin>>a>>b>>c;

            cout<<bana(a,b,c)<<endl;
        }

 
return 0;
}