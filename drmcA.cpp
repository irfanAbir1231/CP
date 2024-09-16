#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip> // for std::setw

using namespace std;

struct Date {
    int day, month, year;
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    bool operator<(const Date& other) const {
        if (year != other.year)
            return year < other.year;
        if (month != other.month)
            return month < other.month;
        return day < other.day;
    }
};

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<Date> dates;
        for (int i = 0; i < N; ++i) {
            int day, month, year;
            char slash;
            cin >> day >> slash >> month >> slash >> year;
            dates.emplace_back(day, month, year);
        }

        sort(dates.begin(), dates.end());

        cout << "Case #" << t << ":" << endl;
        for (const auto& date : dates) {
            cout << setw(2) << setfill('0') << date.day << "/" << setw(2) << setfill('0') << date.month << "/" << date.year << endl;
        }
    }

    return 0;
}
