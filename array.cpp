#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
signed main()
{
 float mothArray[100];
 int n,i;
 cin>>n;
 float total =0;

 for (int i = 0; i < n; i++)
 {
    /* code */
    cin>>mothArray[i];
    total += mothArray[i];
 }
 
cout<<total<<endl;
 
return 0;
}