//        1
//      2 3 2
//    3 4 5 4 3
//  4 5 6 7 6 5 4
//    3 4 5 4 3
//      2 3 2
//        1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = i + 1;
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }

        int start =  2*i;
        for (int j = 0; j < i; j++)
        {
            cout << start<< " ";
            start--;
        }

        cout << endl;
    }

    for(int i=0; i<n-1; i++)
    {
        for(int s=0; s<i+1; s++)
        {
            cout<<"  ";
        }
        int count = n-i-1;
        for(int j=0; j<n-i-1; j++)
        {
            cout<<count<<" ";
            count++;
        }
        int start = 2*(n-i-2);
        for(int j=1; j<n-i-1; j++)
        {
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }
}