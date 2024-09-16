#include <iostream>
#include <string> // Include the <string> header for string operations
using namespace std;

float min_seconds_to_beat_hare(float x, float y) {
    
    // Calculate the number of seconds needed for the hare to cross the distance y
    // Hare's speed decreases by half each second
    // long long seconds = 0;
    float ansx = x;
    float ansy = y;

    while (ansx >= ansy) {
        x /= 2;
        ansx+=x;
        
        ansy+=y;
    }
    return ansy;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        float x,y;
        cin>>x>>y;

        // long long seconds = min_seconds_to_beat_hare(x, y);
        cout << "Case #" << t << ": " << min_seconds_to_beat_hare(x, y) << endl;
    }

    return 0;
}
