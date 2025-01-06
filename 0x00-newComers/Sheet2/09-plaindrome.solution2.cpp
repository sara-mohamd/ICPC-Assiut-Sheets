#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int digit = 0;
  int temp = n;
  while (temp)
  {
    digit = (digit * 10) + (temp % 10);
    temp /= 10;
  }
  if (n == digit)
    cout << digit << endl
         << "YES";
  else
    cout << digit << endl
         << "NO";
  return 0;
}