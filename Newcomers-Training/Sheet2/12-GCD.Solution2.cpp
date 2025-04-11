#include <iostream>
using namespace std;

int GCD(int, int);
int main()
{
  int num1, num2;
  int r = 0;

  cin >> num1 >> num2;
  if (num1 == num2)
    cout << num1;
  else if (num1 > num2)
    cout << GCD(num1, num2);
  else
    cout << GCD(num2, num1);
}

int GCD(int g, int s)
{
  int q = g / s;
  int r = g % s;
  if (r == 0)
    return s;
  else
  {
    int temp;
    while (r)
    {
      // g = (s . q0) + r0
      // s = q0 . q1 + r1
      // until r == 0 ... then take the previous r
      q = s / r;
      temp = r;
      r = s % r;
    }
    return temp;
  }
}
