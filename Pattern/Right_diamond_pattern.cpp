#include <iostream>
using namespace std;

int main()
{
    int n; // Number of rows for the upper half
    cin >> n;
    // Upper half of the pattern
    int start = 3;
    for (int i = 1; i <= n; ++i)
    {
        int num = start;
        for (int j = 0; j < i; ++j)
        {
            cout << num-- << " ";
        }
        start += i + 1;
        cout << endl;
    }

    int count = 2 * n;

    for (int i = 1; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }

    return 0;
}