#include <iostream>
#include <string>

using namespace std;

class Author {
private:
    string name, nationality;
//
public:
    Author(const string& name, const string& nationality): name(name    ), nationality(nationality) {}  

    string getName(    ) const { return name; }
    string getNationality( ) const { return nationality; }

    void setName(const string& name) {this->name = name;}
    void setNationality(const string& nat) {this->nationality= nat;}
};

class Book {
private:
    string title;
    Author author;
    int year;

public:
    Book(const string& title, const Author& author, int year): title(title), author(author), year(year) {}

    string getTitle() const { return title; }
    Author getAuthor() const { return author; }
    int getYear() const { return year; }

    void setTitle(const string& title) { this->title = title; }
    void setAuthor(const Author& author) { this->author = author; }
    void setYear(int year) { this->year = year; }

    void show() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author.getName() << " (" << author.getNationality() << ")" << endl;
        cout << "Year: " << year << endl;
    }   
};
int main() {
    Author author("George Orwell", "British");
    Book book("1984", author, 1949);

    book.show();

    return 0;
}