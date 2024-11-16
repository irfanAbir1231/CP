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
 
// Function to calculate GCD
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

signed main() {
    test {
        long long a, b, c;
        cin >> a >> b >> c;  
        
        long long s = (a + b + c) / 2;
        
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        double r = area / s;
        
        double r_squared = r * r;
        
        long long numerator = static_cast<long long>(round(r_squared * s * s));
        long long denominator = s * s;
        
        long long divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;
        
        cout << numerator << "/" << denominator << endl;
    }
    
    return 0;
}
