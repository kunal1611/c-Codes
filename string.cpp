#include<iostream>

using namespace std;

void main()
{
  char s[20],x;
  int len,z=0;

cout<<"enter the string"<<endl;
gets(s);



for(int i = o;i != NULL;i++)
len++;

for(int i=0;i<len;i++)
{
  x=s[i];

  for(int j=0;j<len;j++)
  {
    if(x==s[j])
    {
      z++;
      s[j]='*';
    }
  }
cout<<z;
}




}
