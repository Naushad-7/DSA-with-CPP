#include<iostream>
using namespace std;

int main()
{
    int deci_num;
    cin>>deci_num;
    int pow = 1;

    int ans = 0;

    while (deci_num > 0)        
    {
        int rem = deci_num%2;
        deci_num = deci_num/2;
        ans = ans+rem*pow;
        pow = pow*10;

    }


    // while(deci_num > 0)
    // {
    //     int rem = deci_num%10;
    //     deci_num = deci_num/10;
    //     ans = ans+rem*pow;
    //     pow = pow*2;
    // }

    cout<<ans<<endl;
    
}