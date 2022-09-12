#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    int *pAge = &age;//storing in pointer variable

    double gpa  = 3.0;
    double *pGpa = &gpa;//storing in pointer variable

    string name = "Mike";
    string *pName = &name;//storing in pointer variable

    cout<< "Age: "<<pAge<<endl;
    cout<< "Gpa: "<<pGpa<<endl;
    cout<< "Name: "<<pName<<endl;

    cout<<*pAge;//De-Referencing Pointer -> to grab the physical computer memory value

    return 0;
}
