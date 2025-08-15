#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n + 1, vector<int>(m + 1));
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      cin >> v[i][j];

  // Diagonals starting from first column
  for (int startRow = 1; startRow <= n; startRow++)
  {
    vector<int> temp;
    int r = startRow, c = 1;
    while (r <= n && c <= m)
    {
      temp.push_back(v[r][c]);
      r++, c++;
    }
    sort(all(temp));
    r = startRow;
    c = 1;
    for (int k = 0; k < sz(temp); k++)
      v[r++][c++] = temp[k];
  }

  // Diagonals starting from first row
  for (int startCol = 2; startCol <= m; startCol++)
  {
    vector<int> temp;
    int r = 1, c = startCol;
    while (r <= n && c <= m)
    {
      temp.push_back(v[r][c]);
      r++, c++;
    }
    sort(all(temp));
    r = 1;
    c = startCol;
    for (int k = 0; k < sz(temp); k++)
      v[r++][c++] = temp[k];
  }

  // Output
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      cout << v[i][j] << ' ';
    cout << '\n';
  }
}
