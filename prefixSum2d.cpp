//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e3+10;
 
int arr[N][N];
int pr[N][N];
signed main()
{
    Irfan
    int n;
    cin>>n;
    
    for (int i = 1; i <= n ; i++)
    {
       
        for (int j = 1; j <= n; j++)
        {
            cin>>arr[i][j];
            pr[i][j]  = arr[i][j] + pr[i-1][j] + pr[i][j-1] - pr[i-1][j-1];
            
        }
        
    }

    test{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum =0;

        // for(int i=a;i<=c;i++)
        // {
        //     for(int j=b;j<=d;j++)
        //     {
        //         sum+=arr[i][j];
                
        //     }
        // }
        sum = pr[c][d] - pr[a-1][d] - pr[c][b-1] + pr[a-1][b-1];

        cout<<sum<<endl;
    }
    
 
return 0;
}