#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Book class to store book details
class Book {
public:
    string title;
    string author;
    int id;

    Book(string t, string a, int i) : title(t), author(a), id(i) {}
};

// Library class to manage books
class Library {
private:
    vector<Book> books;

public:
    // Function to add a book to the library
    void addBook(string title, string author, int id) {
        Book newBook(title, author, id);
        books.push_back(newBook);
        cout << "Book added successfully." << endl;
    }

    // Function to display details of all books in the library
    void displayBooks() {
        cout << "Library Books:" << endl;
        for (const auto& book : books) {
            cout << "ID: " << book.id << "\tTitle: " << book.title << "\tAuthor: " << book.author << endl;
        }
    }

    // Function to search for a book by title
    void searchBookByTitle(string title) {
        auto it = find_if(books.begin(), books.end(), [title](const Book& b) {
            return b.title == title;
        });

        if (it != books.end()) {
            cout << "Book found:" << endl;
            cout << "ID: " << it->id << "\tTitle: " << it->title << "\tAuthor: " << it->author << endl;
        } else {
            cout << "Book not found." << endl;
        }
    }
};

int main() {
    Library library;

    // Adding books to the library
    library.addBook("The Catcher in the Rye", "J.D. Salinger", 1);
    library.addBook("To Kill a Mockingbird", "Harper Lee", 2);
    library.addBook("1984", "George Orwell", 3);

    // Displaying all books in the library
    library.displayBooks();

    // Searching for a book by title
    string searchTitle = "To Kill a Mockingbird";
    library.searchBookByTitle(searchTitle);

    return 0;
}