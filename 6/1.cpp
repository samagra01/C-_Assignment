#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
using namespace std;



class Book {
public:
    Book(const std::string& title, const std::string& author, const std::string& isbn) :
        title(title), author(author), ISBN(isbn), available(true) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getISBN() const { return ISBN; }
    bool isAvailable() const { return available; }
    void setAvailability(bool status) { available = status; }

private:
    std::string title;
    std::string author;
    std::string ISBN;
    bool available;
};

class Member {
public:
    Member(const std::string& name, int id) : name(name), memberID(id) {}

    std::string getName() const { return name; }
    int getMemberID() const { return memberID; }
    // ... Other methods like getBorrowedBooks(), borrowBook(), returnBook() 

// private:
    std::string name;
    int memberID;
    std::vector<Book*> borrowedBooks; 
};

class Library {
public:
     Library(const std::string& name) : name(name) {}

    void addBook(const Book& book) { books.push_back(book); }
    void removeBook(const Book& book);  
    void addMember(const Member& member) { members.push_back(member); }
    void removeMember(const Member& member); 
    Book* searchBook(const std::string& title); 
    void issueBook(Member* member, Book* book); 
    void returnBook(Member* member, Book* book); 

private:
    std::string name;
    std::vector<Book> books;
    std::vector<Member> members;
};



void Library::removeBook(const Book& book) {
    auto it = std::find_if(books.begin(), books.end(), 
                           [&book](const Book& b) { return b.getISBN() == book.getISBN(); });

    if (it != books.end()) {
        books.erase(it);
        std::cout << "Book removed successfully!" << std::endl;
    } else {
        std::cout << "Book not found in the library." << std::endl;
    }
}


void Library::removeMember(const Member& member) {
    auto it = std::find_if(members.begin(), members.end(), 
                           [&member](const Member& m) { return m.getMemberID() == member.getMemberID(); });

    if (it != members.end()) {
        members.erase(it);
        std::cout << "Member removed successfully!" << std::endl;
    } else {
        std::cout << "Member not found." << std::endl;
    }
}


Book* Library::searchBook(const std::string& title) {
    auto it = std::find_if(books.begin(), books.end(), 
                           [&title](const Book& b) { return b.getTitle() == title; });

    if (it != books.end()) {
        return &(*it); 
    } else {
        return nullptr; 
    }
}


void Library::issueBook(Member* member, Book* book) {
    if (book->isAvailable()) {
        member->borrowedBooks.push_back(book);
        book->setAvailability(false);
        std::cout << book->getTitle() << " issued to " << member->getName() << std::endl;
    } else {
        std::cout << "Book is currently unavailable." << std::endl;
    }
}


void Library::returnBook(Member* member, Book* book) {
    auto bookIt = std::find(member->borrowedBooks.begin(), member->borrowedBooks.end(), book);
    if (bookIt != member->borrowedBooks.end()) {
        member->borrowedBooks.erase(bookIt);
        book->setAvailability(true);
        std::cout << book->getTitle() << " returned by " << member->getName() << std::endl; 
    } else {
        std::cout << "Member hasn't borrowed this book." << std::endl;
    }
}


int main(){
    Library centralLibrary("Central Library");

    Book b1("The Hobbit", "J.R.R. Tolkien", "978-0547928227");
    Book b2("Pride and Prejudice", "Jane Austen", "978-0141439518");
    centralLibrary.addBook(b1);
    centralLibrary.addBook(b2);

    Member john("John Doe", 1234);
    centralLibrary.addMember(john);

    // Sample usage
    Book* foundBook = centralLibrary.searchBook("The Hobbit");
    if (foundBook != nullptr) {
        centralLibrary.issueBook(&john, foundBook);
    } else {
        std::cout << "Book not found." << std::endl;
    }

   
    return 0;
    
}




