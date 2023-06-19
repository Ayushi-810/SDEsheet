#include<bits/stdc++.h>
using namespace std;


  string armstrongNumber(int n){
        // code here
        int sum =0;
           int num=n;
           while(n>0)
           {
               int rem=n%10;
              sum+=(rem*rem*rem);
               n=n/10;
               
           }
           if (num==sum)
           {
               return "Yes";
               
           }
           else
           {
               return "No";
           }
    }

    
int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;

    if (armstrongNumber(input)=="Yes") {
        std::cout << "The number is an Armstrong number." <<endl;
    } else {
        std::cout << "The number is not an Armstrong number." <<endl;
    }

    return 0;
}
    