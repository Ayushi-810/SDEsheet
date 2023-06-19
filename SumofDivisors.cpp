#include<bits/stdc++.h>
using namespace std;


 long long sumOfDivisors(int n)
    {
        // Write Your Code here
    long long sum=0;
      
    for(int i = 1; i<=n; i++)
      sum=sum+ i*(n/i);
        
        return sum;
    }


    int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    long long result = sumOfDivisors(n);

    std::cout << "Sum of divisors of " << n << " is: " << result << std::endl;

    return 0;
}