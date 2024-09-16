#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int n;
    while (std::cin >> n) {
        std::vector<int> sequence(n);
        std::vector<bool> isDifferencePresent(n - 1, false);

        for (int i = 0; i < n; i++) {
            std::cin >> sequence[i];
        }

        for (int i = 1; i < n; i++) {
            int diff = std::abs(sequence[i] - sequence[i - 1]);
            if (diff < 1 || diff >= n || isDifferencePresent[diff - 1]) {
                std::cout << "Not jolly" << std::endl;
                break;
            }
            isDifferencePresent[diff - 1] = true;

            if (i == n - 1) {
                std::cout << "Jolly" << std::endl;
            }
        }
    }

    return 0;
}
