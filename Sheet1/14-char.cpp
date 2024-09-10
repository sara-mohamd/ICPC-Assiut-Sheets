#include <iostream>
using namespace std;
int main()
{
  char c;
  cin >> c;

  if (c >= 65 and c <= 90)
    cout << char(c + 32) << endl;

  else if (c >= 97 and c <= 122)
    cout << char(c - 32) << endl;

  else
    cout << "Invalid input" << endl;
  return 0;
}