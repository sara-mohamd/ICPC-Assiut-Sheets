#include <iostream>
using namespace std;

bool prime(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}
int main()
{
  int a, freq[100000001] = {0};
  cin >> a;
  if (prime(a))
    cout << '(' << a << "^1)\n";
  else
  {
    for (int i = 2; i * i <= a; i++)
    {
      if (prime(i))
      {
        while (a % i == 0 && a > i)
        {
          freq[i]++;
          a /= i;
        }
      }
    }
  }

  for (int i = 0; i < 100; i++)
    if (freq[i] != 0)
      cout << i << ": " << freq[i] << endl;
}