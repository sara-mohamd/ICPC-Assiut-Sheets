#include <iostream>
using namespace std;
int main()
{
  long x, y;
  char op;
  cin >> x;
  cin >> op;
  cin >> y;

  switch (op)
  {
  case '+':
    cout << x + y << endl;
    break;
  case '-':
    cout << x - y << endl;
    break;
  case '*':
    cout << x * y << endl;
    break;
  case '/':
    cout << x / y << endl;
    break;
  default:
    cout << "Invalid Operation." << endl;
    break;
  }
  return 0;
}