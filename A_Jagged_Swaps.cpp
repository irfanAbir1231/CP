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
    int n;
    cin>>n;
    int flag = true;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    if(v[0]==1)cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }

    
    
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