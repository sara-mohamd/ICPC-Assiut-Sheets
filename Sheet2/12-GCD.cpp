#include <iostream>
using namespace std;

int GCD(int, int);

int main()
{
  int num1, num2;
  cin >> num1 >> num2;

  cout << GCD(num1, num2);

  return 0;
}

int GCD(int a, int b)
{
  while (b != 0)
  {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}
