#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // If n = 2, print the permutation [1, 2] or [2, 1]
        if (n == 2) {
            cout << "1 2" << endl;
        } else {
            // For n > 2, print the permutation [1, 2, ..., n - 1, n]
            for (int i = 1; i <= n; ++i) {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
