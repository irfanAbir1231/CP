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
int arr[N];
int merge(int l, int r, int mid)
{
    int l_size = mid - l + 1;
    int L[l_size + 1];
    int r_size = r - mid;
    int R[r_size+1];

    for (int  i = 0; i < l_size; i++)
    {
        /* code */
        L[i] = arr[i+l];

    }

    for (int i = 0; i < r_size; i++)
    {
        /* code */
        R[i] = arr[i+mid+1];

    }
    L[l_size] = R[r_size] = INT32_MAX;

    int l_i = 0;
    int r_i = 0;
    
    for (int i = l; i <= r; i++)
    {
        /* code */
        if(L[l_i]<=R[r_i])
        {
            arr[i] = L[l_i];
            l_i++;
        }
        else{
            
            arr[i] = R[r_i];
            r_i++;
        
        }
    }
     
    

}

void mergeSort(int l, int r)
{
    if(l==r) return;
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    merge(l,r,mid);

}

signed main()
{
    Irfan

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    mergeSort(0,n-1);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
    
 
return 0;
}