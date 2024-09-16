//irfan Hakim Bhuiyan
//SWE, Islamic University Of Technology
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
typedef long long ll;

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        int count1 = 0, count0 = 0;

        // for(int i=0;i<n;i++){
        //     if(s[i]=='1'){
        //         count1++;
        //     }
        //     else{
        //         count0++;
        //     }
        // }
        // cout<<count0<<endl;
        // cout<<count1<<endl;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else
            {
                c++;
            }

            if (ceil((i + 1) / 2) <= count0 && count0 != 0)
            {
                for (int j = n - 1; j > i; j--)
                {
                    if (s[j] == '1')
                    {
                        count1++;
                    }
                    else
                    {
                        c++;
                    }

                    if (ceil((n - i - 1) / 2) <= count1)
                    {
                        cout << i+1 << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
