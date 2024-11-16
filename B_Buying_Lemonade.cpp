// Irfan Hakim Bhuiyan
// SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define Irfan ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore(); while(t--)
typedef long long ll;
const int N = 1e5+10;

signed main()
{
    Irfan

    test {
        int n, k;
        cin >> n >> k;
        int press = 0;

        vector<int> v(n);

        // Input the vector elements
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Sort the vector
        sort(v.begin(), v.end());

        // While the number of presses is less than k and vector is not empty
        while (k > press && !v.empty()) {
            for (int i = 0; i < v.size(); i++) {
                if (v[i] > 0) {  // Only decrement if the value is greater than 0
                    v[i]--;
                    press++;
                }

                // If the value becomes -1, erase it from the vector
                if (v[i] == 0) {
                    v.erase(v.begin() + i);
                    i--;  // Adjust index after erasing an element
                }

                // Stop the loop if press count reaches k
                if (press >= k) {
                    break;
                }
            }
        }

        cout << press << endl;  // Output the number of presses
    }

    return 0;
}
