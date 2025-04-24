#include<iostream>
using namespace std;

int factorialN(int n)
{
    int fact =1;

    for(int i=1; i<=n; i++)
    {
        fact *=i;
    }
    return fact;
}

int factorialnCr(int n, int r)
{
    int fact_n = factorialN(n);
    int fact_r = factorialN(r);
    int fact_nmr = factorialN(n-r);

    return fact_n/(fact_r*fact_nmr);
}


int main()
{
    int n,r;
    cout<<"Enter the value of n = ";
    cin>>n;
    cout<<"Enter the value of r = ";
    cin>>r;
    
   int answer =  factorialnCr(n, r);
   cout<<"the nCr of two number is = "<<answer<<endl;

    return 0;
}