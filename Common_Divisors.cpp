//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
#define nl cout << endl;
#define vec_print(v) for(auto i : v) cout << i << " "; nl;
typedef long long ll;
const int N = 1e5+10;
 
signed main()
{
    Irfan
    
    int n;
    cin>>n;

    vector<int>frq(1000006);
    int Max=1;

    for (int i = 0; i < n; i++)
    {
        int x; 
        cin>> x;
        for (int j = 1; j * j <= x; j++) {
            if(x % j == 0) {
                frq[j]++;
                if(frq[j] >= 2) Max = max(Max, j);

                if(j * j != x) {
                    frq[x/j]++;
                    if(frq[x/j] >= 2) Max = max(Max, x/j);
                }
                
            }
        }
    }

    // for(auto i : frq) cout << i.first << " = " << i.second << endl;
    cout<<Max<<endl;
    
}