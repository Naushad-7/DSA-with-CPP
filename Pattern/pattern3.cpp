// create this pattern
// A B C D 
// E F G H
// I J K L

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;

        char words='A';
    while(i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<words<<" ";
            words++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
}