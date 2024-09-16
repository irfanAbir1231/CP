#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin >> n;

    int ans = n;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                for (int l = 0; l < 5; ++l) {
                    int sum = i*10 + j*6 + k*3 + l*1;
                    if (n - sum >= 0 && (n - sum) % 15 == 0) {
                        ans = min(ans, i + j + k + l + (n - sum) / 15);
                    }
                }
            }
        }
    }

    cout << ans << endl;
    }
 
return 0;
}