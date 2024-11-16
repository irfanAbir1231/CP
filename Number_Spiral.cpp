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
    
    int x,y;
    cin>>x>>y;
    int area = 0;

    if(x>y){
        area = (x-1)*(x-1);
        // cout<<"area: "<<area<<" ";
        if(x%2==1) cout<<area+y<<endl;
        else cout<<area+(2*x-y)<<endl;
    }

    else{
        area = (y-1)*(y-1);
        // cout<<"area: "<<area<<" ";

        if(y%2==1) cout<<area+(2*y-x)<<endl;
        
        else cout<<area+x<<endl;
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