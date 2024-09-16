#include <bits/stdc++.h>

using namespace std;

long long min_seconds_to_beat_hare(long long x, long long y) {
    // Calculate the number of seconds needed for the hare to cross the distance y
    // Hare's speed decreases by half each second
    long long seconds = 0.2f;
    while (x >= y) {
        x /= 2;
        ++seconds;
    }
    return seconds;
}

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t) {
        float x, y;
        std::string input_x, input_y;
        
        cin >> x >> y;

        x = stof(input_x + ".f");
        y = stof(input_y + ".f");
        
        long long seconds = min_seconds_to_beat_hare(x, y);
        cout << "Case #" << t << ": " << seconds << endl;
    }
    
    return 0;
}
