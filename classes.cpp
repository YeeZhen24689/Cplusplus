#include <iostream>
#include <string>

using namespace std;

class Book
{
    public:

        string title;
        string author;
        int pages;

        Book ()
        {
            title = "No Title";
            author = "No Input";
            pages = 0;
        }

        Book (string titleinp, string authorinp, int pagesinp)
        {
            title = titleinp;
            author = authorinp;
            pages = pagesinp;
        }
};

int main ()
{
    
    Book book1("Harry Potter","JK Rowling",500);

    cout << book1.title;

    return 0;
}