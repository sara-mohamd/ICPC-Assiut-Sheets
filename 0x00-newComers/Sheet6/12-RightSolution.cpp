#include <iostream>
using namespace std;

int main()
{
  int line, value;
  cin >> line;

  for (int i = 0; i < line; i++)
  {
    value = 1;
    for (int z = 0; z <= i; z++)
    {
      cout << value << " ";
      value = value * (i - z) / (z + 1);
    }
    cout << endl;
  }
}