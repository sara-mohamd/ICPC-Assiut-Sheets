#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  char arr[n + 2][m + 2], b = 'B', w = 'W';
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      cin >> arr[i][j];
  }

  for (int i = 1; i <= n; i++)
  {
    swap(b, w);
    for (int j = 1; j <= m; j++)
    {

      if (j % 2 == 0 && arr[i][j] != '-')
        cout << b;
      else if (arr[i][j] != '-')
        cout << w;
      else
        cout << '-';
    }
    cout << endl;
  }
}