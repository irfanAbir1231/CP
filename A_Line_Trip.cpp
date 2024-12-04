// Irfan Hakim Bhuiyan
// SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define nl cout << endl;
#define vec_print(v) for(auto i : v) cout << i << " "; nl;
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

void solve() {
    int n,k;
    cin>>n>>k;
    int maxDiff = 0;
    int diff = 0;
    int lastDiff=0;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    maxDiff=v[0];
    lastDiff = k - v[n-1];
    for (int i = 1; i < n; i++)
    {
        diff = v[i] - v[i-1];

        if(diff>maxDiff)maxDiff=diff;
    }

    cout<<max(maxDiff,lastDiff*2)<<endl;
    
    
}
 
 
 
 
signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
    
    return 0;
}