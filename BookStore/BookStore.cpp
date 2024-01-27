#include "BookStore.hpp"
#include <iostream>
#include <string>
#include <array>
#include <vector>
/*int availability(BookStore bookName, vector<BookStore> Booklist)
{
    // bool found = false;
    for (int i = 0; i < Booklist.size(); i++)
    {
        if (bookName.getName() == Booklist[i].getName())
        {
            return 1;
        }
        else
            return 0;
    }
}*/
BookStore::BookStore()
{
    
}


BookStore::BookStore(string n, int p) : name{n}, price{p}
{

}

void BookStore::Buy(BookStore BookName, vector<BookStore> booklist)
{
    int flag = 0;
    for (int i = 0; i < booklist.size(); i++)
    {
        flag = 0;
        if (BookName.getName() == booklist[i].name)
        {
            cout << "The book you need to buy [" << BookName.getName() << "] is found!\n";
            break;
        }
        else
            flag = 1;
    }
    if (flag == 1)
        cout << "The book you need [" << BookName.getName() << "] is NOT found!\n";
}

void BookStore::Exchange(BookStore Book1, BookStore Book2, vector<BookStore> booklist)
{ 
    bool found = false;
    for (int i = 0; i < booklist.size(); i++)
    {
        if (Book2.getName() == booklist[i].getName())
        {
            found = true;
            break;
        }
        else
            found = false;
    }

    if (found == true)
    {
        Book1.getName() = Book2.getName();
        cout << "You want to exchange your book [" << Book1.getName()
             << "] with this book: [" << Book2.getName() <<"]\n";
    }
    else
        cout << "Sorry!, but the book you need to exchange ["
             << Book2.getName() << "] is not found!";
}

void BookStore::print(BookStore Book1, BookStore Book2)
{
    cout << Book1.getName() << endl
         << Book2.getName();
}

BookStore::~BookStore()
{
    
}

void BookStore::setName(string n)
{
    name = n;
}

string BookStore::getName()
{
    return name;
}
void BookStore::setPrice(int p)
{
    price = p;
}

int BookStore::getPirce()
{
    return price;
}
