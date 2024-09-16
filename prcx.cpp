#include <iostream>
#include <vector>
#include <algorithm>

int smallestUnrepresentableSum(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end()); // Step 1: Sort the array in ascending order

    int smallestSum = 1;

    for (int i = 0; i < arr.size() && arr[i] <= smallestSum; i++) {
        smallestSum += arr[i];
    }

    return smallestSum;
}

int main() {
    std::vector<int> arr; // Step 1: Create a vector to store values
    int n;

    // Input the number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Input elements and populate the vector
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        arr.push_back(element);
    }

    int result = smallestUnrepresentableSum(arr);

    std::cout << "The smallest sum that cannot be represented as the sum of any two elements is: " << result << std::endl;

    return 0;
}
