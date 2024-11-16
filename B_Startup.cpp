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
 
signed main() {
    Irfan
    
    test {
        int n, k;
        cin >> n >> k;

        unordered_map<int, ll> brand_value_map;
        
        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            brand_value_map[b] += c;
        }
        
        vector<ll> brand_values;
        for (const auto &entry : brand_value_map) {
            brand_values.push_back(entry.second);
        }

        sort(brand_values.begin(), brand_values.end(), greater<ll>());
        
        ll max_revenue = 0;
        int x = k - n;  
        
        if (x <= 0) {
            for (ll value : brand_values) {
                max_revenue += value;
            }
        } else {
            for (int i = 0; i < min(n, (int)brand_values.size()); i++) {
                max_revenue += brand_values[i];
            }
        }

        cout << max_revenue <<endl;
    }
    
    return 0;
}
