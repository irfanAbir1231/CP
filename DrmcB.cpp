#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printGrid(const vector<string>& grid) {
    for (const string& row : grid) {
        cout << row << endl;
    }
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int C;
        cin >> C;

        // Initialize the grid
        vector<string> grid(5, string(30, '.'));

        // Set the initial position of the snake
        int headIndex = 15;
        int tailIndex = 5;

        // Update the snake's position after each step
        for (int i = 0; i < C; ++i) {
            // Move the head to the right
            headIndex = (headIndex + 1) % 30;
            
            // If head reaches the tail position, move the tail to the right as well
            if (headIndex == tailIndex) {
                tailIndex = (tailIndex + 1) % 30;
            }
        }

        // Update the grid to reflect the snake's position
        grid[2][headIndex] = 'H';
        grid[2][tailIndex] = 'T';

        cout << "Case #" << t << ":" << endl;
        printGrid(grid);
    }

    return 0;
}
