#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, q;
  cin >> n >> m >> q;
  char draw[n + 5][m + 5];
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= m; j++)
      draw[i][j] = '.';
  }

  while (q--)
  {
    int r1, r2, c1, c2;
    char c;
    cin >> r1 >> c1 >> r2 >> c2 >> c;
    if (r1 > r2)
      swap(r1, r2);
    if (c1 > c2)
      swap(c1, c2);
    for (int i = r1; i <= r2; i++)
    {
      for (int j = c1; j <= c2; j++)
        draw[i][j] = c;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      cout << draw[i][j];
    cout << endl;
  }
}
// afggg