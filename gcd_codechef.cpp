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
        int n,m;
        cin>>n>>m;
        int arr[n+10];
        int frd[n+10];
        int bcd[n+10];
        frd[0]=bcd[n+1]=0;
        

        for (int i = 1; i <= n; i++)
        {
            /* code */
            cin>>arr[i];
        
        }
        for (int i = 1; i <= n; i++)
            {
                /* code */
                frd[i] = __gcd(frd[i-1],arr[i]);
            }

        for (int i = n; i >= 1; i--)
            {
                /* code */
                bcd[i] = __gcd(bcd[i+1],arr[i]);
            }

        

        
        while(m--)
        {
            int l,r;
            cin>>l>>r;
            int gc = 0;



            // for (int i = 1; i <= l-1; i++)
            // {
            //     /* code */
            //     gc = __gcd(gc,arr[i]);
            // }

            // for (int i = r+1; i <= n; i++)
            // {
            //     /* code */
            //     gc = __gcd(gc,arr[i]);
            // }

            gc = __gcd(frd[l-1],bcd[r+1]);

            cout<<gc<<endl;
            
        }
        
    }
    
 
return 0;
}