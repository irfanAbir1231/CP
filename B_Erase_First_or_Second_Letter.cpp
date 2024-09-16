#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
    
      ll n;
    cin>>n;
string s;
cin>>s;
set<char> st;
ll count =0;
for(auto it : s){
    st.insert(it);
    count+=st.size();

}
cout<<count<<endl;
 
return 0;
}