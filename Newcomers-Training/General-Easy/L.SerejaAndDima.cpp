#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x1 = 0, x2 = 0, ok = 1;
  cin >> n;
  int a[n] = {0}, l = 0, h = n - 1, val = 0;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  while (h >= l)
  {
    if (a[h] > a[l])
    {
      val = a[h];
      h--;
    }
    else
    {
      val = a[l];
      l++;
    }
    if (ok)
    {
      x1 += val;
      ok = 0;
    }
    else
    {
      x2 += val;
      ok = 1;
    }
  }

  cout << x1 << ' ' << x2 << endl;
}