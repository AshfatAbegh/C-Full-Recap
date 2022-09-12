#include <iostream>
using namespace std;

class Student{
   public:
       string name;
       string major;
       double gpa;
       Student(string Name, string Major, double Gpa){
          name = Name;
          major = Major;
          gpa = Gpa;
       }
       bool hasHonors(){
          if(gpa >= 3.5){
            return true;
          }
          return false;
       }
};

int  main()
{
    Student student1("Sam","Science",3.00);

    cout<<student1.name<<endl;
    cout<<student1.hasHonors();

    return 0;
}
