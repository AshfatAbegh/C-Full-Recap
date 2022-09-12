#include <iostream>
using namespace std;

class Book {
    public:
         string title;
         string author;
         int pages;

         Book(string Title, string Author, int Pages){
           //->Constructor Function
            title = Title;
            author = Author;
            pages = Pages;
         }
         Book(){
           //using no parameter
           title = "no title";
           author = "no author";
           pages = 0;
         }
};

int main()
{
   Book book1( "Harry Potter", "JK", 250);//constructor

   Book book2("Harry", "UK", 350);

   Book book3;

   cout<<book1.title<<endl;
   cout<<book1.author<<endl;
   cout<<book1.pages<<endl;

   cout<<".........."<<endl;

   cout<<book2.title<<endl;
   cout<<book2.author<<endl;
   cout<<book2.pages<<endl;

   cout<<book3.title;

   return 0;
}
