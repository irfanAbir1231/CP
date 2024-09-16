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
 
signed main()
{
    Irfan
    
    test{
        ll a, b;
        cin >> a >> b;
        
        ll result = a;
        for (ll i = 2; i <= b; i++) {
            ll x = (a + i) / sqr(i);
            result += x;
        }
        
        cout << result << endl;
    }

 
return 0;
}