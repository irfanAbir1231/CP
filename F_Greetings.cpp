//F


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pbds                                               \
    tree<pair<int, int>, null_type, less<pair<int, int> >, \
         rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
 
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        pbds s;
        for(int i=n-1;i>=0;i--){
            arr.push_back(s.order_of_key({ v[i].second, i }));
            s.insert({ v[i].second, i });
        }
        long long sum=0;
        for(auto it:arr)sum+=it;
        cout<<sum<<endl;
    }
    return 0;
}