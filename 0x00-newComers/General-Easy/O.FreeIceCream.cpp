#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, x, distress = 0, amount = 0;
  cin >> n >> x;
  char c;
  while (n--)
  {
    cin >> c >> amount;
    if (c == '+')
      x += amount;
    else
    {
      if (x >= amount)
        x -= amount;
      else
        distress++;
    }
  }
  cout << x << ' ' << distress << endl;
}