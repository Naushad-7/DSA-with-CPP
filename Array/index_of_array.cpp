#include<iostream>
using namespace std;

int main()
{
    int nums[] = {17, 8, 9, 1, 2, 11, 0};

    int size = 7;
    int largest = INT8_MIN;
    int largestIndex = -1;

    for(int i = 0; i<size; i++)
    {
        // largest = max(nums[i], largest);
        if(nums[i] > largest)
        {
            largest = nums[i];
            largestIndex = i;
        }
    }

    cout<<"The Largest value among this nums is "<<largest<<endl;
    cout<<"The index of the largest value is "<<largestIndex<<endl;

}