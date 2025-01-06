#include <iostream>
using namespace std;
int main()
{
  int n1, n2;
  char c;
  cin >> n1;
  cin >> c;
  cin >> n2;

  switch (c)
  {
  case '=':
    if (n1 == n2)
      cout << "Right";
    else
      cout << "Wrong";
    break;
  case '>':
    if (n1 > n2)
      cout << "Right";
    else
      cout << "Wrong";
    break;
  case '<':
    if (n1 < n2)
      cout << "Right";
    else
      cout << "Wrong";
    break;
  default:
    cout << "Invalid Operation";
    break;
  }
  return 0;
}