//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000
#define Irfan ios::sync_with_stdio(false); cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore(); while(t--)

typedef long long ll;
const int MOD = 998244353;
const int N = 1e5 + 10;

ll mod_exp(ll base, ll exp, int mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = result * base % mod;
        base = base * base % mod;
        exp /= 2;
    }
    return result;
}

ll mod_inv(ll x, int mod) {
    return mod_exp(x, mod - 2, mod);
}

signed main() {
    Irfan

    int n;
    cin >> n;

    vector<int> red_weights(n);
    vector<int> green_weights(n);

    for (int i = 0; i < n; ++i) {
        cin >> red_weights[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> green_weights[i];
    }

    ll sum_of_expected_weights = 0;
    for (int i = 0; i < n; ++i) {
        sum_of_expected_weights += (red_weights[i] + green_weights[i]) % MOD;
        sum_of_expected_weights %= MOD;
    }
    sum_of_expected_weights = (sum_of_expected_weights * mod_inv(2, MOD)) % MOD;

    ll inv_n = mod_inv(n, MOD);
    for (int k = 1; k <= n; ++k) {
        ll result = (k * sum_of_expected_weights % MOD) * inv_n % MOD;
        cout << result;
        if (k < n) cout << " ";
    }
    cout << endl;

    return 0;
}
