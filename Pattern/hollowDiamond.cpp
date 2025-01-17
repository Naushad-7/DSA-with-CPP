#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        cout << "*";

        if (i != 0)
        {
            for (int s = 0; s < (2 * i - 1); s++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int s = 0; s < i + 1; s++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {

            for (int s = 0; s < n - (2 * i) - 1; s++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
}