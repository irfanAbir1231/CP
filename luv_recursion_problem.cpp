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

vector<vector<int>> subsets;

void generate(vector<int> &subset , int i, vector<int> &nums)
{
    if(i==nums.size())
    {
        subsets.push_back(subset);
        return;
    }
    //i th element not in subset
    generate(subset,i+1,nums);

    //i th element in subset
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();

}
 
signed main()
{
    Irfan
    int n;
    cin>>n;

    vector<int>nums(n);

    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    vector<int> empty;

    generate(empty, 0 , nums);

    for(auto subset : subsets)
    {
        for(auto ele : subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    
    
 
return 0;
}