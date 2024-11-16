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
 
bool is_1100(const string &s, int pos) {
    if (pos < 0 || pos + 3 >= s.size()) return false;
    return s[pos] == '1' && s[pos + 1] == '1' && s[pos + 2] == '0' && s[pos + 3] == '0';
}

signed int main() {
    Irfan
    
   test{
        string s;
        cin >> s;
        int q;
        cin >> q;
        
        int count_1100 = 0;
        for (int i = 0; i < s.size() - 3; i++) {
            if (is_1100(s, i)) {
                count_1100++;
            }
        }
        
        string output; 
        while (q--) {
            int i, v;
            cin >> i >> v;
            i--; 
            
            for (int pos = i - 3; pos <= i; pos++) {
                if (is_1100(s, pos)) {
                    count_1100--;
                }
            }
            
            s[i] = '0' + v;
            
            for (int pos = i - 3; pos <= i; pos++) {
                if (is_1100(s, pos)) {
                    count_1100++;
                }
            }
            
            if (count_1100 > 0) {
                cout <<"YES\n";
            } else {
                cout <<"NO\n";
            }
        }
        
    }
    
    return 0;
}
