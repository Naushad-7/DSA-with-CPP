#include<iostream>

using namespace std;

bool isPrime(int n)
{
    if(n%2 == 1)
    {
        return true;
    }

    return false;
}

int main()
{
    int x;
    cout<<"Enter the value of X = ";
    cin>>x;

    if(isPrime(x))
    {
        cout<<" The given number X is = "<<x<<" a prime number"<<endl;
    }
    else
    {
        cout<<" The given number X is = "<<x<<" not a prime number"<<endl;

    }

        
}