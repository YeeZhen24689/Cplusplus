#include <iostream>
#include <string>

using namespace std;

int forloopex1 ()
{
    int nums[5] = {1,3,5,10,100};
    for (int i: nums)
    {
        cout << i << endl;
    }

    return 0;
}

int forloopex2 ()
{
    int nums[5] = {1,3,5,10,100};
    cout << sizeof(nums) << endl;
    for (int i; i <= sizeof(nums)/sizeof(*nums); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}

int exponentfunc (int base, int index)
{
    int result = 1;
    for (int i = 1; i <= index; i++)
    {
        cout << result << endl;
        result *= base;
    }
    cout << result << endl;
    return result;
}

int main () 
{

    //forloopex1 ();

    //forloopex2 ();

    exponentfunc(5,20);

    return 0;
}