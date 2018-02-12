#include<iostream>

using namespace std;

int findArray(int a[],int n,int num)
{
  for(int i = 0; i < n; i++)
  {
    if(a[i] == num)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  int a[10],n,num;

cout<<"enter the size of array less than 10"<<endl;
cin>>n;

cout<<"rnter the nummber you want to search"<<endl;
cin>>num;




}
