#include<iostream>
using namespace std;


void reverseArray(int arr[], int size)
{
    int start = 0, end = size-1;
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main()
{
    int arr[] = {4,5,8,7,9,6,3,2};
    int size = 8;
    reverseArray(arr, size);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
