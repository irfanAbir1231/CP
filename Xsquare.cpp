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
    test{
		string s;
		cin>>s;

		int a[26] = {0};

		for(int i=0;i<s.length();i++)
		{
			a[s[i]-'a']++;
		}

		int flg = 0;
		for(int i=0;i<26;i++)
		{
			if(a[i]>1) flg=1;
		}

        // cout<<flg<<endl;

		if(flg==1)
        cout<<"Yes"<<endl;

		else 
        cout<<"No"<<endl;
	}
    
 
return 0;
}