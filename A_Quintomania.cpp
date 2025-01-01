// Irfan Hakim Bhuiyan
// SWE, Islamic University Of Technology
#include <bits/stdc++.h>
using namespace std;
#define Irfan ios::sync_with_stdio(false); cin.tie(0);
#define test int t; cin >> t; while(t--)
typedef long long ll;

int main() {
    Irfan
    
    test {
        int n;
        cin >> n;
        
        vector<int> arr(n);  
        bool isPerfect = true;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++) {
            int interval = abs(arr[i] - arr[i + 1]);
            if (interval != 5 && interval != 7) {
                isPerfect = false;
                break;
            }
        }
        
        if (isPerfect) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
