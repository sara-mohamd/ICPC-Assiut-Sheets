#include <iostream>
using namespace std;

bool isLuck(int);
int main()
{
  int b1, b2;
  cin >> b1 >> b2;
  bool lucky = 0;

  for (int i = b1; i <= b2; i++)
  {
    if (isLuck(i))
    {
      cout << i << " ";
      lucky = 1;
    }
  }

  if (!lucky)
    cout << "-1";
}

bool isLuck(int number)
{
  while (number)
  {
    int digit = number % 10;
    if (digit != 4 && digit != 7)
      return false;
    number /= 10;
  }
  return true;
}