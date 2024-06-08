// Library Management System:
// Create classes for Library, Book, and Member.
// Implement methods for borrowing, returning, and searching books.
// Utilize inheritance for different types of members (Student, Faculty).

#include <iostream>
using namespace std;

// class Book;

class Book
{
public:
    string name;
    bool av;
    Book(string n) : name(n) {}

    void borrow()
    {
        av = false;
    }
    void returnBook()
    {
        av = true;
    }
};

class Members
{
public:
    string name;
    Book *borrowed[10];
     int nBorrow = 0;

    Members(string n) : name(n) {}

    virtual bool borrow(Book *b) = 0;

    virtual bool returnB(Book *b) = 0;
};

class Library
{
public:
    Book *books[250];
     int nBook = 0;
    Members *members[70];
     int mMem = 0;

    void addmem(Members *m)
    {
        if (mMem < 250)
        {
            members[mMem++] = m;
        }
        else
        {
            cout << "No member space in Lib" << endl;
        }
    }

    void addBook(Book *b)
    {
        if (nBook < 250)
        {
            books[nBook++] = b;
        }
        else
        {
            cout << "No space in Lib" << endl;
        }
    }

    Book *searchBook(string bname)
    {
        for (int i = 0; i < nBook; i++)
        {
            if (books[i]->name == bname)
            {
                return books[i];
            }
        }
        return NULL;
    }

    void borrow(Members *mem, Book *b)
    {
        if (mem->borrow(b))
        {
            cout << mem->name << " has borrowed " << b->name << endl;
        }
        else
        {
            cout << "Book is not available" << endl;
        }
    }

    void returnBook(Members *mem, Book *b)
    {
        if (mem->returnB(b))
        {
            cout << mem->name << " has returned " << b->name << endl;
        }
        else
        {
            cout << "Can not return the book" << endl;
        }
    }
};

class Student : public Members
{
public:
    Student(string n) : Members(n) {}

    bool borrow(Book *b) override
    {
        if (b->av && nBorrow < 10)
        {
            borrowed[nBorrow++] = b;
            b->borrow();
            return true;
        }
        return false;
    }

    bool returnB(Book *b)
    {
        for (int i = 0; i < nBorrow; i++)
        {
            if (borrowed[i] == b)
            {
                borrowed[i] = borrowed[--nBorrow];
                b->returnBook();
                return true;
            }
        }
        return false;
    }
};


class Faculty : public Members
{
public:
    Faculty(string n) : Members(n) {}

    bool borrow(Book *b) override
    {
        if (b->av && nBorrow < 10)
        {
            borrowed[nBorrow++] = b;
            b->borrow();
            return true;
        }
        return false;
    }

    bool returnB(Book *b)
    {
        for (int i = 0; i < nBorrow; i++)
        {
            if (borrowed[i] == b)
            {
                borrowed[i] = borrowed[--nBorrow];
                b->returnBook();
                return true;
            }
        }
        return false;
    }
};

int main()
{

    Library library;
    Book b1("Let us c++");
    Book b2("HelloWorld");
    Book b3("gavling");

    library.addBook(&b1);
    library.addBook(&b2);
    library.addBook(&b3);

    Student st("mini");
    Faculty fc("Mir");

    library.addmem(&st);
    library.addmem(&fc);

    if (library.searchBook("HelloWorld") != NULL)
    {
        library.borrow(&st, &b2);
    }

    if (library.searchBook("Rosan") != NULL)
    {
        library.borrow(&st, &b2);
    }

    if (library.searchBook("gavling") != NULL)
    {
        library.borrow(&fc, &b3);
    }

    library.returnBook(&st, &b2);

    return 0;
}
