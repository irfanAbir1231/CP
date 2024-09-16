#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
 
int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        
        
        if (n == "1" or n == "4" or n == "78") {
            cout << "+" << endl;
        }
        
        else if (n.size() >= 2 and n[n.size() - 2] == '3' and n[n.size() - 1] == '5') {
            cout << "-" << endl;
        }
        
        else if (n.size() >= 2 and n[0] == '9' and n[n.size() - 1] == '4') {
            cout << "*" << endl;
        }
        
        else if (n.size() >= 3 and n.substr(0, 3) == "190") {
            cout << "?" << endl;
        }
        
        else {
            cout << "+" << endl;
        }
    }
 
return 0;
}