#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, ok = 1;
  cin >> n >> m;
  char a[n + 5][m + 5];
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (i % 2 != 0)
        a[i][j] = '#';
      else
        a[i][j] = '.';
    }
    if (i % 2 == 0)
    {
      if (ok)
      {
        a[i][m] = '#';
        ok = 0;
      }
      else
      {
        a[i][1] = '#';
        ok = 1;
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      cout << a[i][j];
    cout << endl;
  }
}