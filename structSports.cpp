#include <iostream>
#include<stdio.h>
using namespace std;

struct games
{
  long g_code;
  char g_name[20];
  int fees;
  int duration;
};


int main()
{
  int choice;
  struct games g;

  cout<<"enter the code"<<endl;
  cin>>g.g_code;

  cout<<"enter the name of game"<<endl;
  cout<<"press 1 for table tannis"<<endl;
  cout<<"press 2 for swimming"<<endl;
  cout<<"press 3 for football"<<endl;
  cin>>choice;

  switch(choice)
  {
    case 1:cout<<"game:table tannis"<<endl;
            cout<<"fees:2400"<<endl;
            cout<<"duration:3"<<endl;
            break;
    case 2:cout<<"game:swimming"<<endl;
            cout<<"fees:3000"<<endl;
            cout<<"duration:3"<<endl;
                    break;
    case 3:cout<<"game:football"<<endl;
            cout<<"fees:25000"<<endl;
            cout<<"duration:3"<<endl;
                  break;

  }


  return 0;
}
