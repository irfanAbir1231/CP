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

unordered_map<char,int> symb = {{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1},};

string isBalanced(string s)
{
    stack<char> st;
    for(char bracket : s)
    {
        if(symb[bracket]<0)
        st.push(bracket);

        else{
            if(st.empty())return "NO";

            char top = st.top();
            st.pop();

            if(symb[bracket] + symb[top] !=0)
            {
                return "NO";
            }
        }
    }

    if(st.empty())return "YES";
    else{
        return "NO";
    }

}
 
signed main()
{
    Irfan

    test{
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    
    
 
return 0;
}