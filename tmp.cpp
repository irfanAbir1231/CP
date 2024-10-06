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
 
vector<int> validSequence(string word1, string word2) {
    map<char,vector<int>> mp;
    for(int i = 0; i < word1.size(); i++) {
        mp[word1[i]].push_back(i);
    }

    vector <int> ind;
    int cnt = 0;
    for(int i = 0; i < word2.size(); i++) {
        char c = word2[i];
        if(ind.empty()) {
            if(mp.count(c)) {
                ind.push_back(mp[c].front());
            } else ind.push_back(-1);
        } else {
            int x = ind.back();
            if(mp.count(c)) {
                auto it = *upper_bound(mp[c].begin(), mp[c].end(), x);
                ind.push_back(it);
            } else {
                ind.push_back(-1);
            }
        }
    }

    vector <int> ans;
    int cnt = 0;
    for(auto i : ind) cnt += (i == -1);
    if(cnt > 1) {
        return ans;
    } else {
        
    }
}

signed main()
{
    Irfan
    
    string a, b; cin >> a >> b;
    vector <int> ans = validSequence(a, b);
    for(auto &i : ans) cout << i << " ";
    cout << endl;
 
}