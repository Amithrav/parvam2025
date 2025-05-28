#include <iostream>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    double price;

    Book(std::string bookTitle, std::string bookAuthor, double bookPrice)
        : title(bookTitle), author(bookAuthor), price(bookPrice) {
    }

    void displayBookInfo() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Price: $" << price << std::endl;
    }
};

int main() {
    
    Book book1("physics", "Isaac Newton ", 25.99);
    Book book2("chemistry", "Antoine Lavoisier", 15.50);


    book1.displayBookInfo();
    std::cout << std::endl;
    book2.displayBookInfo();

    return 0;
}