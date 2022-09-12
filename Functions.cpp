#include <iostream>
using namespace std;

void sayHi(string name, int age);

int main()
{
    sayHi("Ashfat", 50);
    sayHi("Araf", 60);

    return 0;
}
void sayHi(string name, int age){
  cout<<"Hello "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}
