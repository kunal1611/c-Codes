#include<iostream>

using namespace std;

int main()
  {
    int a[10],n;

    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i = 0; i < n; i++)
    {
      cin>>a[i];
    }

    for(int i = 0; i < n; i++)
    {
      if(a[i]%2==0)
      {
        a[i]=2*a[i];
      }
      else
      {
        a[i]=3*a[i];
      }
    }

    for(int i = 0; i < n; i++)
    {
      cout<<a[i]<<endl;
    }
    return 0;
  }
