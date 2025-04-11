#include <iostream>
using namespace std;

bool solve(long int n)
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
  long int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    if (solve(n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}