#include <iostream>
#include "BookStore.hpp"
#include <algorithm>
#include <string>
#include <array>
#include <vector>
using namespace std;

void operator<<(ostream &cout, BookStore b)
{

    cout << b.getName() << endl;
    // cout << b.getPirce();
}

int main()
{
    vector<BookStore> Booklist{{"Clean Code", 150}, {"How to Program C++", 110}, {"Beyond-Einstein", 100}, {"Physics of the Impossible", 120}, {"Effective Modern C++", 150}};
    BookStore Book1;

    Book1.setName("How to Program C++");
    // Booklist.push_back(Book1);
    // cout << Book1.getName();

    Book1.setPrice(5);
    cout << "\n|===============================Welcome=================================|\n\n";
    Book1.Buy({Book1.getName(), Book1.getPirce()}, Booklist);

    cout << "\n|======================================================================|\n";

    BookStore Book2;
    Book2.setName("Clean Code");

    Book2.Exchange(Book1, Book2, Booklist);

    cout << "\n|======================================================================|\n";

    // Book2.print(Book1, Book2);
    cout << Book2;
    cout << Book1;
    cout << "\n|===============================Good Bye===============================|\n";

    
}