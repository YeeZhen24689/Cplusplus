#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int numbergrid[3][3] = 
    {
        {4,5,6},
        {3,5,7},
        {4,6,7},
    };
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numbergrid[i][j] << endl;
        }
    }

    return 0;
}