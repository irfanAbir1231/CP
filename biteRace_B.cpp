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

int n,m;
vector<string> a(n), b(n);


auto chq(int &i, int &j)
{
    int diff = (b[i][j] - a[i][j] +3)%3;
    if(diff == 0) return;

    else if(diff == 1)
    {
        a[i][j] = (a[i][j] - '0' + 1)%3;
        a[i+1][j+1] =(a[i][j] - '0' + 1)%3;
        a[i+1][j] =(a[i][j] - '0' + 2)%3;
        a[i][j+1] = (a[i][j] - '0' + 2)%3;
    }

    else{
        a[i][j] = (a[i][j] - '0' + 2)%3;
        a[i+1][j+1] = (a[i][j] - '0' + 2)%3;
        a[i+1][j] = (a[i][j] - '0' + 1)%3;
        a[i][j+1] = (a[i][j] - '0' + 1)%3;

    }



};
 
signed main()
{
    Irfan
    
    test{
        cin>>n>>m;


        for(auto &i : a) cin>>i;
        for(auto &i : b) cin>>i;

        for (int i = 0; i < n-1; i++)
        {
            for(int j = 0;j<m-1;j++)
            {
                chq(i,j);
            }
        }

        if(a==b) cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
        

        
    }
 
return 0;
}