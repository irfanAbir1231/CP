#include <bits/stdc++.h>
using namespace std;

// Function to collect all layers and count occurrences of "1543" in each layer
int count_1543_occurrences(const vector<string>& carpet, int n, int m) {
    string target = "1543";
    int count = 0;

    int layers = min(n, m) / 2;
    for (int layer = 0; layer < layers; layer++) {
        string path;

        // Traverse the top edge from left to right
        for (int j = layer; j < m - layer; j++) {
            path += carpet[layer][j];
        }

        // Traverse the right edge from top to bottom
        for (int i = layer + 1; i < n - layer; i++) {
            path += carpet[i][m - layer - 1];
        }

        // Traverse the bottom edge from right to left
        for (int j = m - layer - 2; j >= layer; j--) {
            path += carpet[n - layer - 1][j];
        }

        // Traverse the left edge from bottom to top
        for (int i = n - layer - 2; i > layer; i--) {
            path += carpet[i][layer];
        }

        // Count occurrences of "1543" in this layer
        size_t pos = path.find(target);
        while (pos != string::npos) {
            count++;
            pos = path.find(target, pos + 1);
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; i++) {
            cin >> carpet[i];
        }

        // Compute the number of occurrences of "1543" in all layers
        int result = count_1543_occurrences(carpet, n, m);
        cout << result << "\n";
    }

    return 0;
}
