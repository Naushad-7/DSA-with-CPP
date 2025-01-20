#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int a = 0;
    int b = 1;
    cout<<a <<" "<<b<<" ";
    
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        // cout << a <<" + "<<b <<" = "<< nextNumber << endl;
        // cout<<" here this is your fibo series:" <<endl;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
}