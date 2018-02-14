#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  for(int i = 0; i < 4; i++)
  {
  //  cout << setw(4-i);
    for(int j = 0; j <= i; j++)
    {
      cout << '*';
    }
    cout << endl;
  }

}
