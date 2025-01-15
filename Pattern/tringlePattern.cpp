// create this patter
// 1                       // A
// 2 2         OR            // B B
// 3 3 3                   // C C C
// 4 4 4 4                 // D D D D

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    // while (i <= n)
    // {
    //     char ch = 'A' + i - 1;
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << ch << " ";
    //         // cout<<i<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // pattern..................

    // A
    // B C
    // D E F
    // G H I J

    // char words = 'A';
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<words<<" ";
    //         words++;
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }

    //  PATTERN................

    // A
    // B C
    // C D E
    // D E F G

    // while (i <= n)
    // {
        // char ch = 'A' + i - 1; // Here after one itration when I = 2; ch will be remain same as declear and value will be change according to the value of " i " after the itration ........
        // int j = 1;
        // while (j <= i)
        // {
        //     char ch = 'A' + i + j - 2;   // This formula also do the same thing just we dont have to increment the value of the char... after printing....
        //     cout << ch << " ";
        //     // ch++;
        //     // cout<<i<<" ";
        //     j++;
        // }
        // cout << endl;
        // i++;
    // }

//  PATTERN................
//  D
//  C D
//  B C D
//  A B C D

    while(i<=n)
    {
        int j=1;
            char ch = 'A' + n - i;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}