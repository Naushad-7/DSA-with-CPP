// print this pattern

//     *
//    **
//   ***
//  ****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int row=1;
    // while(row <= n)
    // {
    //     int space = n-row;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout<<" *";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;

    // }

    // Print this pattern..............

    //* * * *
    //* * *
    //* *
    //*

    // int i =1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=n-i+1)
    //     {
    //         cout<<" *";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Print this pattern........

    // * * * *
    //   * * *
    //     * *
    //       *

    // while(i<=n){

    //     int space=i-1;
    //     while(space)
    //     {
    //         cout<<" _";
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=n-i+1)
    //     {
    //         cout<<" *";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // print this patter

    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    // while(i<=n)
    // {
    //     int space= i-1;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=n-i+1)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // Print this pattern

    //        1
    //      2 2
    //    3 3 3
    //  4 4 4 4

    // while(i<=n)
    // {
    //     int space=n-i;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }

    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // print this pattern

    // 1 2 3 4
    //   2 3 4
    //     3 4
    //       4

    // int row=1;
    // while(row<=n)
    // {
    //     int space=row-1;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }

    //     int col=1;
    //     int count=row;
    //     while(col<=n-row+1)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // print this pattern...........

    //        1
    //      2 3
    //    4 5 6
    //  7 8 9 10

    // int row=1;
    // int count=1;
    // while(row<=n)
    // {
    //     int space = n-row;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }

    //     int col=1;
    //     while(col<=row)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;

    // }

    // Print this pattern..............

    //               1
    //            1  2  1
    //         1  2  3  2  1
    //      1  2  3  4  3  2  1

    // int i=1;
    // while(i<=n)
    // {
    //     int space = n-i;
    //     while(space)
    //     {
    //         cout<<"  ";
    //         space--;
    //     }
    //     int count =1;

    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }

    //     int start = i-1;
    //     while(start)
    //     {
    //         cout<<start<<" ";
    //         start--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int count=1;

    // Print this pattern ..........

    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    int i = 1;

    while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j<<" ";
            j++;
        }

        int star =1;
        while(star < 2*(i-1)+1)
        {
            cout<<"*"<<" ";
            star++;
        }
        int k = n-i+1;
        while(k)
        {
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
        i++;

    }
}

