#include<bits/stdc++.h>
using namespace std;


 int reverse(int x) {
        
        long long int ans=0;
        if(x/10==0)
        {
            return x;
        }

        while(x)
        {
            ans=ans*10+x%10;
            x=x/10;

        }

        return ((ans<INT_MIN||ans>INT_MAX)?0:ans);
    }

    
int main()
{
    int x;
    cin>>x;
    cout<<reverse(x);
    return 0;
}