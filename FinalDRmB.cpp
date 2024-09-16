#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long sum_of_absolute_distances(int N, vector<int>& arr) {
    sort(arr.begin(), arr.end()); 

    vector<long long> dp(N, 0); 

    for (int i = 1; i < N; ++i) {
        dp[i] = dp[i - 1] + (arr[i] - arr[i - 1]) * i;
    }

    long long total_sum = 0;
    for (int i = 0; i < N; ++i) {
        total_sum += dp[i];
    }

    return total_sum ; 
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    cout << sum_of_absolute_distances(N, arr) << endl;
    return 0;
}
