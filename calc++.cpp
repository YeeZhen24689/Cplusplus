#include <iostream>
#include <string>

using namespace std;


int count(int n1,int n2,char op)
{
    int returnvalue;
    if (op == '+')
    {
        returnvalue = n1 + n2;
    }
    else if (op == '-')
    {
        returnvalue = n1 - n2;
    }
    else if (op == '*')
    {
        returnvalue = n1 * n2;
    }
    else if (op == '/')
    {
        returnvalue = n1 / n2;
    }
    else
    {
        cout << "This operator is not valid";
    }
    return returnvalue;
}

int main()
{
    int n1,n2;
    char op;
    cout << "Number 1 | ";
    cin >> n1;
    cout << "Enter your operator | ";
    cin >> op;
    cout << "Number 2 | ";
    cin >> n2;

    int answer = count(n1,n2,op);

    cout << answer;

    return 0;
}