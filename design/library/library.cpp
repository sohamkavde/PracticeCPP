#include<iostream>
#include<vector>
using namespace std;

class Author{
    private:
        string name;
        string country;

    public:
        Author(){

        }
        Author(string nam,string countr){
            name = nam;
            country = countr;
        }

        string AuthorName(){
            return name;
        }

        string AuthorCountry(){
            return country;
        }
};

class Book{
    private:
        string title;
        Author author;
        string borrowby;
    public:
        Book(string title,Author au){
            this->title = title;
            this->author = au;
        }

        string getTitle(){
            return title;
        }

        Author getAuthor(){
            return author;
        }

        string getborrowby(){
            return borrowby;
        }

        void borrowBook(string name){
            if(borrowby.empty()){
                borrowby = name;
                cout<<title<<" is borrowed by "<< name<<endl;
            }else{
                cout<<title<<" has already borrowed by"<< borrowby<<endl;
            }
        }

        void returnBook(){
            if(!borrowby.empty()){
                cout<<"The book "<<title<<" is return by " << borrowby<<endl;
                borrowby.clear();
            }else{
                cout<<"The book "<< title <<" has not been borrowed \n";
            }
        }
};

class Library{
    private:
        vector<Book>books;
    public:
        void addBooks(Book& book){
            books.push_back(book);
        }

        // show books
        void displayBooks(){
            for (auto book : books)
            {
                cout<<"Book Name : "<<book.getTitle()<<", Author of the book is : "<<book.getAuthor().AuthorName()<<" From "<<book.getAuthor().AuthorCountry()<<" country."<<endl;
            }
            
        }
};


int main(){
  Author author1("Soham kawde","India");
  Author author2("Soham kawde 1","US");
  Book Book1("C++ Reference",author1);
  Book Book2("Python",author2);

  Library l;
  l.addBooks(Book1);
  l.addBooks(Book2);

  l.displayBooks();

  Book1.borrowBook("Mohit");
  Book2.borrowBook("Mahesh");
  Book1.returnBook();
return 0;
}