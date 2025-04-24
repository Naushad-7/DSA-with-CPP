#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{
    for( int i = 0; i<sz; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}


int main()
{
    int arr[] = {1,2,3,4,8,9,7};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    cout<<linearSearch(arr, sz, target)<<endl;
    return 0;
}