#include<iostream>

using namespace std;

int palindromeCount(int[], int);
int ispalin(int);

int main()
{
  int a[10];

  for(int i = 0; i < 10; i++)
  {
    cin>>a[i];
  }

  cout<<"number of palindromes are:" <<palindromeCount(a,10)<<endl;
  return 0;
}

int palindromeCount(int a[], int size)
{
  int count=0;
  for(int i =0; i < size; i++)
  {
    if(ispalin(a[i]))
    {
      count++;
    }
  }
  return count;
}

int ispalin(int a)
{
  int r,temp,check=0;
  temp=a;
  while(temp != 0)
  {
    r= temp % 10;
    check = check * 10 + r;
    temp /=10;
  }
  if(check == a)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
