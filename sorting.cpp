#include <iostream>

using namespace std;


void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void ascsort(int a[], int n)
{
  int min;  //index of the minimum element

  for(int i = 0; i < n; i++)
  {
    min = i;

    for(int j = i + 1; j < n; j++)
    {
      if(a[min] > a[j])
      {
        min = j;
      }
    }

    swap(a[i], a[min]);
  }
}

void descsort(int a[], int n)
{
  int max;  //index of the minimum element

  for(int i = 0; i < n; i++)
  {
    max = i;

    for(int j = i + 1; j < n; j++)
    {
      if(a[max] < a[j])
      {
        max = j;
      }
    }

    swap(a[i], a[max]);
  }
}

int main()
{
  int a[] = {3, 5, 2, 4, 6, 5, 7, 9, 1};

  for(int i = 0; i < 9; i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;
  
  ascsort(a, 9);

  for(int i = 0; i < 9; i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;

  descsort(a, 9);

  for(int i = 0; i < 9; i++)
  {
    cout << a[i] << " ";
  }

}
