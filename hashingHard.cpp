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

int hsh[N][26];
 
signed main()
{
    Irfan
    
    test{
        for (int  i = 0; i < N; i++)
        {
            /* code */
            for (int j = 0; j <26 ; j++)
            {
                /* code */
                hsh[i][j] = 0;
            }
            
        }

        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            hsh[i+1][s[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            for (int j = 1; j <=n; j++)
            {
                /* code */
                hsh[j][i] += hsh[j-1][i];
            }
            
        }
        

        while(m--)
        {
            int l,r;
            cin>>l>>r;



            // for (int i = l; i <= r; i++)
            // {
            //     /* code */
            //     hsh[s[i]-'a']++;
            // }

            int oddcnt = 0;

            for (int i = 0; i < 26; i++)
            {
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt%2!=0)oddcnt++;
            }

            if(oddcnt<=1) cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
            
            


        }
    }
 
return 0;
}