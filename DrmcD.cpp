#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }

    // Create a 2D array to store the maximum points obtained by shooting glasses from index i to j
    vector<vector<int>> dp(N, vector<int>(N, 0));

    // Iterate over all possible subarrays of length l
    for (int l = 1; l <= N; ++l) {
        for (int i = 0; i <= N - l; ++i) {
            int j = i + l - 1;
            // Calculate the maximum points by shooting each glass in the subarray
            for (int k = i; k <= j; ++k) {
                int leftPoints = (k == 0) ? 0 : dp[i][k - 1];
                int rightPoints = (k == N - 1) ? 0 : dp[k + 1][j];
                int currentPoints = V[k] * ((i > 0 ? V[i - 1] : 1) * (j < N - 1 ? V[j + 1] : 1));
                dp[i][j] = max(dp[i][j], leftPoints + currentPoints + rightPoints);
            }
        }
    }

    cout << dp[0][N - 1] << endl;

    return 0;
}
