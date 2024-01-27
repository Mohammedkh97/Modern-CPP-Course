#include <iostream>
#include <string>
#include <vector>
using namespace std;

// int availaility(BookStore bookName, vector<BookStore> Booklist);

class BookStore
{
private:
    int index;
    string name;
    int price;

public:
    // Declarations
    BookStore();
    BookStore(string n, int p);

    // Functions Prototypes
    void setName(string n);
    string getName();
    void setPrice(int p);
    int getPirce();
    void Buy(BookStore BookName, vector<BookStore> booklist);
    void Exchange(BookStore Book1, BookStore Book2, vector<BookStore> booklist);

    //void print( BookStore book);
    void print(BookStore Book1 , BookStore Book2);
    ~BookStore();
};