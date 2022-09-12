#include <iostream>
using namespace std;

class Movie{
    private:
        double rating;
    public:
        string title;
        string director;

        Movie(string Title, string Director, double Rating){
           title = Title;
           director = Director;
           setRating(Rating);
        }

        void setRating(double Rating){
           if(Rating == 8.0 || Rating == 9.00){
             rating = Rating;
           }
           else{
             rating = 0.0;
           }
        }
        double getRating(){
           return rating;
        }

};

int main()
{
    Movie movie1("Avengers","RK",8.0);

    cout<<movie1.getRating();

    return 0;
}
