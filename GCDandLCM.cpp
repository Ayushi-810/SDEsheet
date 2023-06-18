#include<bits/stdc++.h>
using namespace std;

 long long gcd(long long a , long long b)
   {
       if(b==0)
       return a;
       else
       
       return gcd(b,a%b);
       
   }
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
        vector<long long>v;
        long long ans=gcd(a,b);
        long long lcm=(a*b)/ans;
        v.push_back(lcm);
        v.push_back(ans);
        
        return v;
        
        
        
    }


  int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    vector<long long> result = lcmAndGcd(a, b);
    cout << "LCM: " << result[0] << endl;
    cout << "GCD: " << result[1] << endl;
    return 0;
}