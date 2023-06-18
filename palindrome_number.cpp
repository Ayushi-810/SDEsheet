#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
      
    if(x<0)
    return false;

    long long ori=0,rev=0,rem=0;
    ori=x;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }

    if(ori==rev)
    return true;
    else
    return false;
    }


    int main()
{
    int x;
    cin>>x;
    cout<<isPalindrome(x);
    return 0;
}


