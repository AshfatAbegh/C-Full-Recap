#include <iostream>
using namespace std;

double cube(double num){
   double result = num * num *num;
   return result;
}

int main()
{
    double answer = cube(9.5);
    cout<<answer;

    return 0;
}
