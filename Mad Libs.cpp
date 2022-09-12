#include<iostream>
using namespace std;

int main()
{
    string color, pluralNoun, sport;

    cout<<"Enter a color: ";
    getline(cin, color);
    cout<<"Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout<<"Enter a sport: ";
    getline(cin, sport);

    cout<<"................."<<endl;

    cout<<"Roses are "<< color <<endl;
    cout<<pluralNoun<<" are blue"<<endl;
    cout<<"I Love "<<sport<<endl;

    return 0;
}
