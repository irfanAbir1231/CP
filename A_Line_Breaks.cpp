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
    int n,m;
    cin>>n>>m;

    string s;
    int Total=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        
    }
    for (int i = 0; i < n; i++)
    {
        if(Total+=s.length()<=m){
            Total+=s.length();
            cnt++;
        }
        else{
            break;
        }
    }
    
    cout<<cnt<<endl;
    
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