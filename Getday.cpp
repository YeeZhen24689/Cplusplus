#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string getdayofWeek(int Daynum)
{
    string Dayname;

    switch(Daynum)
    {
        case 0:
            Dayname = "Sunday";
            break;
        case 1:
            Dayname = "Monday";
            break;
        case 2:
            Dayname = "Tuesday";
            break;
        case 3:
            Dayname = "Wednesday";
            break;
        case 4:
            Dayname = "Thursday";
            break;
        case 5:
            Dayname = "Friday";
            break;
        case 6:
            Dayname = "Saturday";
            break;
        default:
            Dayname = "Invalid Day";
        
    }

    return Dayname;
}

int main()
{
    int Daynum = 0;
    while (Daynum <=6)
    {
        string Day = getdayofWeek(Daynum);
        cout << Day << endl;
        Daynum++;
    }


    return 0;
}