#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n>>k;
    

    vector<int> floor(n);
    for (int i = 0; i < n; ++i) {
        cin >> floor[i];
    }

    vector<int> distance;
    for (int i = 1; i < n; ++i) {
        distance.push_back(floor[i] - floor[i - 1]);
    }

    sort(distance.begin(), distance.end());

    for (int i = 0; i < k - 1 && i < distance.size(); ++i) {
        distance[i + 1] += distance[i];
    }

    cout << distance[k - 2] << endl;

    return 0;
}