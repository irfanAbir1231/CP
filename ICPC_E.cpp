//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define   Irfan          ios::sync_with_stdio(false);cin.tie(0);
#define sqr(x) ((x) * (x))
#define test int t; cin >> t; cin.ignore();  while(t--)
typedef long long ll;
const int N = 1e5+10;
 
void solveGame(int n, int starter, int caseNum) {
    int currentStones = n;
    bool isOddiusTurn = (starter == 1);

    while (true) {
        int maxRemovable = currentStones / 2;
        
        if (isOddiusTurn) {
            if (maxRemovable % 2 == 1) {
                currentStones -= maxRemovable;
            } else if (maxRemovable > 1) {
                currentStones -= maxRemovable - 1;
            } else {
                cout << "Case " << caseNum << ": Evenius" << endl;
                return;
            }
        } else {
            if (maxRemovable % 2 == 0 && maxRemovable > 0) {
                currentStones -= maxRemovable;
            } else if (maxRemovable > 0) {
                currentStones -= maxRemovable - 1;
            } else {
                cout << "Case " << caseNum << ": Oddius" << endl;
                return;
            }
        }
        
        isOddiusTurn = !isOddiusTurn;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n, starter;
        cin >> n >> starter;
        solveGame(n, starter, i);
    }
    return 0;
}
