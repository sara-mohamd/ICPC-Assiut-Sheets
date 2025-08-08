#include <bits/stdc++.h>
using namespace std;

void fast()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
}
int main()
{
  fast();
  int n, m, q;
  cin >> n >> m >> q;
  int matrix[n + 1][m + 1] = {0};
  long long prefix[n + 1][m + 1] = {0};

  // Take array as an input
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      cin >> matrix[i][j];
  }

  // update prefix #1
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      prefix[i][j] = prefix[i][j - 1] + matrix[i][j];
  }

  // update prefix #2
  for (int j = 1; j <= n; j++)
  {
    for (int i = 1; i <= m; i++)
      prefix[i][j] += prefix[i - 1][j];
  }

  int x1, y1, x2, y2;
  while (q--)
  {
    cin >> x1 >> y1 >> x2 >> y2;
    long long sum = prefix[x2][y2] - prefix[x2][y1 - 1] - prefix[x1 - 1][y2] + prefix[x1 - 1][y1 - 1];
    cout << sum << endl;
  }
}