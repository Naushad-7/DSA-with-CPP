#include<iostream>
using namespace std;

bool findPrime(int n)
{
  if(n <= 1)
  {
    return false;
  }

  for(int i =2; i*i <=n; i++)
  {
    if(n % i == 0)
    {
        return false;
    }
  }
  return true;
}

// To print prime number between two numbers we can create a another funtion that will print the prime number and simply we can just call this fuction to print by the main fuction.
// void printPrime(int n)
// {
//   for(int i = 2; i<=n; i++)
//   {
//     if(findPrime(i))
//     {
//       cout<<i<<" ";
//     }
//   }
//   cout<<endl;
// }

int main()
{
   int num ;
   cout<<"Enter the Number here = ";
   cin>>num;

  //  OR simply we can just write the code in main function to print the prime numbers .........
  // both will work same ....
   cout<<"The prime number between 2 and N is = "<<endl;
   for(int i=2; i<=num; i++)
   {
    if(findPrime(i))
    {
      cout<<i<<" ";
    }
   }
   cout<<endl;
   return 0;
}