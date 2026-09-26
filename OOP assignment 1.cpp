#include <iostream>
using namespace std;

class book
{ 
public:
   int bookID;
   string book_name;
   float price;

   void display()
   {
    cout<<"-----BOOK DETAILS-----"<<"\n";
    cout<<"Book ID: "<<bookID<<"\n";
    cout<<"Book Name: "<<book_name<<"\n";
    cout<<"Price: "<<price<<"\n";
   }
};

int main()
{
 book b1;
 b1.bookID=299;
 b1.book_name="python";
 b1.price=289.8;
 b1.display();

 return 0;
}
