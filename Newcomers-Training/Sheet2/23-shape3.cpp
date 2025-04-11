#include <iostream>
using namespace std;

int main()
{
  int line;
  cin >> line;

  for (int i = 0; i < line; i++)
  {
    for (int j = 0; j < line - i - 1; j++)
      cout << " ";
    for (int k = 0; k < 2 * i + 1; k++)
      cout << "*";
    cout << endl;
  }

  for (int i = line - 1; i >= 0; i--)
  {
    for (int j = 0; j < line - i - 1; j++)
      cout << " ";
    for (int k = 0; k < 2 * i + 1; k++)
      cout << "*";
    cout << endl;
  }
}