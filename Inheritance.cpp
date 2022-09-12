#include <iostream>
using namespace std;

class Chef{
     public:
        void makeChicken(){
          cout<<"The chef makes chicken"<<endl;
        }
        void makeSalad(){
          cout<<"The chef makes salad"<<endl;
        }
        void makeSpecialDish(){
          cout<<"The chef makes bbq ribes"<<endl;
        }
};

class ItalianChef : public Chef{
     public:
            void makePasta(){
              cout<<"The ItalianChef makes Pasta"<<endl;
            }
            void makeSpecialDish(){
            //-> Method/Function Overriding
            cout<<"The ItalianChef makes meatbox"<<endl;
        }

};

int main()
{
    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makePasta();
    italianChef.makeSpecialDish();

    return 0;
}
