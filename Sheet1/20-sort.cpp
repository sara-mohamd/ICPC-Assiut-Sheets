#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a >= c && a >= b)
  {
    if (b >= c)
    {
      cout << c << endl
           << b << endl
           << a << endl
           << endl;
      cout << a << endl
           << b << endl
           << c << endl;
    }
    else
    {
      cout << b << endl
           << c << endl
           << a << endl
           << endl;
      cout << a << endl
           << b << endl
           << c << endl;
    }
  }
  //----------------------------------------
  else if (b >= a && b >= c)
  {
    if (a >= c)
    {
      cout << c << endl
           << a << endl
           << b << endl
           << endl;
      cout << a << endl
           << b << endl
           << c << endl;
    }
    else
    {
      cout << a << endl
           << c << endl
           << b << endl
           << endl;
      cout << a << endl
           << b << endl
           << c << endl;
    }
  }
  //----------------------------------------
  else if (c >= a && c >= b)
  {
    if (a >= b)
    {
      cout << b << endl
           << a << endl
           << c << endl
           << endl;
      cout << a << endl
           << b << endl
           << c << endl;
    }
    else
    {
      cout << a << endl
           << b << endl
           << c << endl
           << endl;
      cout << a << endl
           << b << endl
           << c << endl;
    }
  }
  //----------------------------------------
  else
    cout << "fail";
  return 0;
}