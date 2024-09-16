#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool findThreeSumZero(vector<long long>& a, long long n) {
    sort(a.begin(), a.end());

    for (long long i = 0; i < n - 2; ++i) {
        long long left = i + 1;
        long long right = n - 1;
        while (left < right) {
            long long sum = a[i] + a[left] + a[right];
            if (sum == 0) {
                return true;
            } else if (sum < 0) {
                ++left;  // Need a larger sum
            } else {
                --right; // Need a smaller sum
            }
        }
    }
    return false;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (findThreeSumZero(a, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}