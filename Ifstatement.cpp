#include <iostream>
#include <string>

using namespace std;

int checktall()
{
    bool isMale = false;
    bool isTall = false;

    if(isMale && isTall)
    {
        cout << "You are a tall male.";
    }
    else if(isMale && !isTall)
    {
        cout << "You are a short male.";
    }
    else if(!isMale && isTall)
    {
        cout << "You are not male but is tall.";
    }
    else
    {
        cout << "You are not a male and not tall. ";
    }

    return 0;

}

int gethighest (int n1, int n2, int n3)
{
    int result;
    if (n1 >= n2 && n1 >= n3)
    {
        result = n1;
    }
    else if (n2 >= n3 && n2 >= n1)
    {
        result = n2;
    }
    else
    {
        result = n3;
    }
    return result;
}

int main()
{
    int n1,n2,n3;
    cout << "Type in your first number.";
    cin >> n1;
    cout << "Type in your second number.";
    cin >> n2;
    cout << "Type in your second number.";
    cin >> n3;
    int bigger = gethighest(n1,n2,n3);
    cout << "The biggest number is " << bigger;
    return 0;
}