#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Function to perform modular exponentiation
long long mod_exp(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, c;
        cin >> n >> m >> c;

        // Number of ways to color a single row with valid constraints
        long long ways = (c * (c - 1)) % MOD;

        // Raise the ways to the power of (n - 1)
        ways = mod_exp(ways, n - 1, MOD);

        // For each column, we multiply by (c - 1) to ensure no two adjacent cells in a column are the same color
        long long result = (ways * c) % MOD;

        cout << result << endl;
    }
    return 0;
}
