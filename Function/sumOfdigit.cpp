#include<iostream>
using namespace std;

int sumOfDigit(int n)
{
    int digitSum = 0;
    
    while(n>0)
    {
       int digit = n%10;
        digitSum += digit;
        n = n/10;
    }
    return digitSum;
}

int main()
{
    int ans = sumOfDigit(286);
    cout<<ans;
    
}