#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int rands(time(0));
    int randnum = 1 + rand() % 10;
    int choice,guess;
    while (guess==0)
    {
        cout << "You will guess the number between 1 and 10 that I have in mind. -->";
        cin >> choice;
        if (choice == randnum)
        {
            guess = 1;
        }
        else
        {
            cout << "Wrong, guess again!" << endl;
        }
    }

    cout << "Correct!" << endl;
    return 0;

}