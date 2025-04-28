#include<iostream>

using namespace std;

void printFibo(int n)
{
    if(n <= 0)
    {
        cout<<"Invalid input N = "<<endl;
        return;
    }


    int a =0, b =1, fibo;
    for(int i =1; i<= n; i++)
    {
        if(i == 1)
        {
            cout<<a<<" ";
            continue;
        }
        if(i == 2)
        {
            cout<<b<<" ";
            continue;
        }

        fibo = a+b;
        a = b;
        b = fibo;
        cout<<fibo<<" ";
    }
}

int main()
{
    int num;
    cout<<"Enter the nth number to print the fibonacci series = ";
    cin>>num;

    printFibo(num);
    return 0;
}