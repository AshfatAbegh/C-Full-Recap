#include <iostream>
using namespace std;

int  main()
{
  string phrase = "Ashfat Rashid";
  string phrasesub;
  phrasesub = phrase.substr(7, 3);
  cout<<"Hello\n";//new line
  //cout<<phrase.length()<<endl;//link function
  //phrase[3] = 'R';
  cout<<phrase.find('f')<<endl;
  cout<<phrasesub;

  return 0;
}
