#include<iostream>

using namespace std;

int swap (&int a,&int b)
{
  
}

int main()
{

  int a[10][10];
  int rows,column;

  cout<<"enter the rows"<<endl;
  cin>>rows;
  cout<<"enter the column"<<endl;
  cin>>column;

  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < column; j++)
    {
      cin>>a[i][j];
    }
  }



return 0;
}
