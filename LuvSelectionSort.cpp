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
 
signed main()
{
    Irfan
    
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    for (int i = 0; i <n; i++)
    {
        /* code */
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }

        swap(arr[i],arr[minIndex]);

        
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
     
return 0;
}