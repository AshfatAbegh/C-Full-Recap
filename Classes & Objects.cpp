#include <iostream>
using namespace std;

class Book {
    public:
         string title;
         string author;
         int pages;
};

int main()
{
   Book book1;

   book1.title  = "Harry Potter";
   book1.author = "JK";
   book1.pages = 250;

   Book book2;

   book2.title  = "Harry";
   book2.author = "UK";
   book2.pages = 350;


   cout<<book1.title<<endl;
   cout<<book1.author<<endl;
   cout<<book1.pages<<endl;

   cout<<"............."<<endl;

   cout<<book2.title<<endl;
   cout<<book2.author<<endl;
   cout<<book2.pages<<endl;

   return 0;
}
