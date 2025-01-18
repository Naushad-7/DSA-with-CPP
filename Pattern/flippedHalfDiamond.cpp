//        *
//       **
//      ***
//     ****
//    *****
//     ****
//      ***
//       **
//        *

// Flipped Half Diamond
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // print the top part of the pattern

    for (int i = 0; i < n; i++)
    {
        // in top part printing the space first
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << "  ";
        }
        // printing the stars in the top part of the pattern
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for(int i=0; i<n-1; i++)
    {
        for(int s=0; s<i+1; s++)
        { 
            cout<<"  ";
        }
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}