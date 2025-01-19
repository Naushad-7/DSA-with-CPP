// Hollow Square Pattern with Diagonals


//==============================================
//  Pattern 2: Hollow Square Pattern with Diagonals
//==============================================
//                        *  1  2  3  *
//                        1  *  2  *  4
//                        1  2  *  3  4
//                        1  *  4  *  5
//                        *  3  4  5  *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i == j || j+i == n-1)
            {
                cout << "*  ";
            }
            else
            {
                cout <<i+j <<"  ";
            }
        }
        cout << endl;
    }
}