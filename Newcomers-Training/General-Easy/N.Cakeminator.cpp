#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r, c, sum = 0, ctr = 0, idx = 1;
  cin >> r >> c;
  char a[r][c];
  for (int i = 0; i < r; i++)
  {
    idx = 1;
    ctr = 0;
    for (int j = 0; j < c; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == 'S')
        idx = 0;
      else if (idx)
      {
        a[i][j] = 'X';
        ctr++;
      }
    }
    if (idx)
      sum += ctr;
  }
  for (int i = 0; i < c; i++)
  {
    idx = 1;
    ctr = 0;
    for (int j = 0; j < r; j++)
    {
      if (a[i][j] == 'S')
      {
        idx = 0;
        continue;
      }
      if (a[i][j] == 'X')
        continue;
      else
        ctr++;
    }
    if (idx)
      sum += ctr;
  }
  cout << sum << endl;
}