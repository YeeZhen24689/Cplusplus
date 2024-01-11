#include <iostream>

using namespace std;

void sayHi(string name, string color)
{
    cout << "Hello " << name << " Your favourite color is " << color << endl;
}

double cubed(double num)
{
    double result = num * num * num;
    return result;
}

int main ()
{
    string color, pluralnoun, noun, name;

    cout << "Enter a color:";
    getline(cin,color);
    cout << "Enter a Plural Noun:";
    getline(cin,pluralnoun);
    cout << "Enter a Noun:";
    getline(cin,noun);
    cout << "Enter your name:";
    getline(cin,name);

    sayHi(name,color);

    cout << "Roses are " << color << "," << endl;
    cout << pluralnoun <<" are blue," << endl;
    cout << "The " << noun << " is fine," << endl;
    cout << "So how are you, " << name << "?" << endl;

    return 0;
}
