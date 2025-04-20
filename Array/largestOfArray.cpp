#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {79, 85, 78, 96, 89};

    int size = 5;

    int largest = INT8_MIN;
    int smallest = INT8_MAX;

    for(int i=0; i<size; i++)
    {
        smallest = min(marks[i], smallest);
        // here basically the min fuction do the if else work for the program and find out the smallest among the all of the given array. so basically it takes the two parameters first is array with loop variable and second the smallest number assigned to the variable.

    //     if(marks[i] > largest)
    //     {
    //         largest = marks[i];
    //     }

        largest = max(marks[i], largest);
    }
    cout<<"Smallest value in the array is "<<smallest<<endl;
    cout<<"Largest value in the array is "<<largest<<endl;


    return 0;
}