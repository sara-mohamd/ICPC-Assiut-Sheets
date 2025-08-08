#include <bits/stdc++.h>
using namespace std;
bool lucky(int num)
{
  while (num)
  {
    int digit = num % 10;
    // cout << digit << ' ';
    num /= 10;
    if (digit != 4 && digit != 7)
      return false;
  }
  return true;
}
int main()
{
  int n, idx = 0;
  cin >> n;

  for (int i = 4; i <= n; i++)
  {
    if (lucky(i))
    {
      if (n % i == 0)
      {
        idx = 1;
        break;
      }
    }
  }
  if (idx)
    cout << "YES\n";
  else
    cout << "NO\n";
}